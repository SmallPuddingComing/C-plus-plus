// c++11.cpp : �������̨Ӧ�ó������ڵ㡣
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

//����ַ���������5��data;
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

	//һ����Χ�ڼ�forѭ��;
	int arry[] = { 1, 2, 3, 4, 5, 66, 7 };
	for (int &x:arry)
	{
		x *= 2;
		cout << "x: " << x << endl;
	}


	vector<Data> my_vec;
	vector<Data>::iterator it = std::find_if(my_vec.begin(), my_vec.end(), Cmpare(5));

	//ʹ��find_if��������ĳ��Ԫ�أ�Ȼ�����ɾ��
	test_find_if_func();
	test_find_func();
}

