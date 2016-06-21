// c++11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <utility>
#include<string>
#include <vector>
using namespace std;

#include "check_refrence.h"
#include "stl_find_if.h"
#include "test_find.h"

struct Data
{
public:
	Data(){ m_len = 5; }
public:
	int m_len;
	int length(){ return m_len; }
};

//检查字符串长度是5的data;
struct Cmpare
{
	Cmpare(int m) :m_len(m){}
	bool operator()( Data& d)
	{
		d = Data();
		return(d.length() == m_len);
	}
private:
	int m_len;
};

int _tmain(int argc, _TCHAR* argv[])
{
	string lvalue("lvalue");
	const string const_lvalue("const lvalue");

	meow(lvalue);
	meow(const_lvalue);
	meow(rvalue_func());
	meow(const_rvalue_func());

	//一定范围内简化for循环;
	int arry[] = { 1, 2, 3, 4, 5, 66, 7 };
	for (int &x:arry)
	{
		x *= 2;
		cout << "x: " << x << endl;
	}


	vector<Data> my_vec;
	vector<Data>::iterator it = std::find_if(my_vec.begin(), my_vec.end(), Cmpare(5));

	//使用find_if函数查找某个元素，然后进行删除
	test_find_if_func();
	test_find_func();
}

