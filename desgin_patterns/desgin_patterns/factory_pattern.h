#include <stdio.h>
#include <iostream>
using namespace std;

//单核
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

//双核
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

//工厂
class CoreFactory
{
public:
	virtual SingleCore* CreateSingleCore() = 0;
	virtual MultiCore* CreateMultiCore() = 0;
};

//抽象工厂
//工厂A：专门用来生产A型的处理器
class FactoryA : public CoreFactory
{
public:
	SingleCore* CreateSingleCoreA(){ return new SingleCoreA(); }
	MultiCore* CreateMultiCoreB(){ return new MultiCoreA(); }
	
};

//工厂B：专门用来生产B型的处理器
class FactoryB : public CoreFactory
{
public:
	MultiCore* CreateMultiCoreA(){ return new MultiCoreB(); }
	SingleCore* CreateSingleCoreB(){ return new SingleCoreB(); }

};


