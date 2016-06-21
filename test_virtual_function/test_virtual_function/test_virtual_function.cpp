// test_virtual_function.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//��ʽǿת��ʹ�ö��������ָ�롢���á��ࡢvoid��
	D1* d1 = dynamic_cast<D1*>(&a2);//���μ�����к�����ǿת
	cout << boolalpha << (0 != d1) << endl; // ���"true",��Ϊa1����ȷʵ��ָ��D1
	D2* d2 = dynamic_cast<D2*>(&a2);
	cout << boolalpha << (0 != d2) << endl;// ���"false",��Ϊa1����ȷʵ����ָ��D2 

	cout << "\n" << "test object init " << endl;
	A a3 = d;

	cout << "\n" << endl;
	D2 dd;
	a3.funct1(dd);
	a3.funct2(dd);//������ô��ε�ʱ��funct1�Ѿ��൱�ڿ�����һ���ڴ� ���Կ��Թ������ö�������Ҫ���й��캯���ĵ���

	cout << "\n" << endl;


	const int & ref = 1;


}

