
class A
{
public:
	A();//Ĭ�Ϲ��캯��
	A(int a);
	A(const A &other);//�������캯��
	A funct1(A &a);
	A & funct2(A &a);
	A & operator =(const A& other);//��ֵ���������
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

//һ�����ܱ��̳е��࣬���ǽ��乹�캯���������������˽�е�
//���ӣ���C++�������������ӵķ�ֹ����ֵ�͸��ơ�
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




