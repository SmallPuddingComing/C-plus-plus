#include <stdio.h>
#include <iostream>
using namespace std;

//����
class SingleCore
{
public:
	virtual void show() = 0;
};

class SingleCoreA :public SingleCore
{
public:
	void show(){cout << "Single Core A"<<endl;}
};

class SingleCoreB :public SingleCore
{
public:
	void show(){cout << "Single Core B" << endl; }
};

//˫��
class MultiCore
{
public:
	virtual void show() = 0;
};

class MultiCoreA :public MultiCore
{
public:
	void show(){ cout << "Multi Core A" << endl; }
};

class MultiCoreB :public MultiCore
{
public:
	void show() { cout << "Multi Core B" << endl; }
};

//����
class CoreFactory
{
public:
	virtual SingleCore* CreateSingleCore() = 0;
	virtual MultiCore* CreateMultiCore() = 0;
};

//���󹤳�
//����A��ר����������A�͵Ĵ�����
class FactoryA : public CoreFactory
{
public:
	SingleCore* CreateSingleCoreA(){ return new SingleCoreA(); }
	MultiCore* CreateMultiCoreB(){ return new MultiCoreA(); }
	
};

//����B��ר����������B�͵Ĵ�����
class FactoryB : public CoreFactory
{
public:
	MultiCore* CreateMultiCoreA(){ return new MultiCoreB(); }
	SingleCore* CreateSingleCoreB(){ return new SingleCoreB(); }

};


