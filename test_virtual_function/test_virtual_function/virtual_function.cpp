#include "stdafx.h"
#include "virtual_function.h"
#include <iostream>
using namespace std;

A::A()
{
	this->m_a = 10;
	cout << "hello i am A construct" << endl;
};

A::A(int a)
{
	this->m_a = a;
	cout << "hello i am A " << endl;
}

A::~A()
{
	cout << "hello i am A disconstruct" << endl;
};

A::A(const A &other)
{
	this->m_a = other.m_a;
	cout << "hello i am a copy construct" << endl;
	
}

A A::funct1(A &a)
{
	return a;//返回不是引用的时候需要调用下拷贝构造函数
}
A& A::funct2(A &a)
{
	return a;
}

A & A::operator=(const A& other)
{
	cout << "hello i am = operator" << endl;
	if (this == &other)
	{
		return *this;
	}
	this->m_a = other.m_a;
	return *this;
}

void A::show()
{
	cout << "this is class A" << endl;
};

B::B()
{
	this->m_b = 20;
};

B::~B()
{
};

void B::show()
{
	cout << "this is class B" << endl;
};


D::D()
{
}

D::~D()
{
}

