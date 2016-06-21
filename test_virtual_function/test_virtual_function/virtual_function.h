
class A
{
public:
	A();//默认构造函数
	A(int a);
	A(const A &other);//拷贝构造函数
	A funct1(A &a);
	A & funct2(A &a);
	A & operator =(const A& other);//赋值运算符重载
	virtual ~A();
	virtual void show();
private:
	int m_a;

};

class B :public A
{
public:
	B();
	~B();
	void show();
private:
	int m_b;
};

//一个不能被继承的类，就是将其构造函数和析构函数变成私有的
//例子：在C++中流就是这样子的防止被赋值和复制。
class D
{
private:
	D();
	~D();

};

//class E:public D
//{
//public:
//	E() : D(){}
//	~E(){}
//};




