#include<iostream>
using namespace std;
//��ʵ��ģʽ
class Singleton
{
public:
	static Singleton * GetInstance(const char*name);
	void show() {}
protected:
	Singleton(){}//��������Ϊ�����ģ�Ҫ��Ȼ����û�а취��ʼ�����๹�캯��
private:
	static Singleton* singleton;
};

class SingletonA :public Singleton
{
	friend class Singleton;//��������Ԫ�࣬�������޷����ʵ�֮������ݳ�Ա
public:
	void show(){ cout << "SingletonA" << endl; }
private://�������ԣ�ʹ������޷�ͨ�����캯�����г�ʼ������
	SingletonA(){}

};

class SingletonB :public Singleton
{
	friend class Singleton;//��������Ԫ�࣬�������޷����ʵ�֮������ݳ�Ա
public:
	void show(){ cout << "SingletonB" << endl; }
private://�������ԣ�ʹ������޷�ͨ�����캯�����г�ʼ������
	SingletonB(){}

};