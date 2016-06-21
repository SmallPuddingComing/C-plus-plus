// test_virtual_function.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "virtual_function.h"
#include <iostream>
using namespace std;

void test(A *&p)
{
	cout<<typeid(p).name()<<endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	A *p = new A();
	A *p1 = new B();
	B b =  B();
	A *p2 = &b;

	cout << "\n" << endl;
	test(p);
	test(p1);
	test(p2);
	p->show();
	p1->show();

	B b1;
	A &a1 = b1;
	cout << typeid(a1).name() << endl;

	if (typeid(p) == typeid(p1))
	{
		cout << "p is p1" << endl;
	}
	if (typeid(p) == typeid(p2))
	{
		cout << "p is p1" << endl;
	}
	else
	{
		cout << "p is  not p1" << endl;
	}

	class D1 :public A{};
	class D2 :public A{};

	cout << "\n" << "test &object" << endl;
	D1 d;
	A &a2 = d;

	//显式强转（使用对象可以是指针、引用、类、void）
	D1* d1 = dynamic_cast<D1*>(&a2);//类层次间的上行和下行强转
	cout << boolalpha << (0 != d1) << endl; // 输出"true",因为a1本身确实是指向D1
	D2* d2 = dynamic_cast<D2*>(&a2);
	cout << boolalpha << (0 != d2) << endl;// 输出"false",因为a1本身确实不是指向D2 

	cout << "\n" << "test object init " << endl;
	A a3 = d;

	cout << "\n" << endl;
	D2 dd;
	a3.funct1(dd);
	a3.funct2(dd);//这边引用传参的时候，funct1已经相当于开辟了一段内存 所以可以共用引用对象，则不需要进行构造函数的调用

	cout << "\n" << endl;


	const int & ref = 1;


}

