#include<iostream>
using namespace std;
//单实例模式
class Singleton
{
public:
	static Singleton * GetInstance(const char*name);
	void show() {}
protected:
	Singleton(){}//必须声明为保护的，要不然子类没有办法初始化基类构造函数
private:
	static Singleton* singleton;
};

class SingletonA :public Singleton
{
	friend class Singleton;//必须是友元类，负责父类无法访问到之类的数据成员
public:
	void show(){ cout << "SingletonA" << endl; }
private://保护属性，使得外界无法通过构造函数进行初始化对象
	SingletonA(){}

};

class SingletonB :public Singleton
{
	friend class Singleton;//必须是友元类，负责父类无法访问到之类的数据成员
public:
	void show(){ cout << "SingletonB" << endl; }
private://保护属性，使得外界无法通过构造函数进行初始化对象
	SingletonB(){}

};