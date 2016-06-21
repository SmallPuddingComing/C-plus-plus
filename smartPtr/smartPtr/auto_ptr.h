#include <memory>
#include<iostream>
#include<string>
using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) :str(s){ cout << "Create a Report Object" << endl; }
	~Report(){ cout << "Object is delete" << endl; }
	void comment(string owner)const { cout << owner << str << endl; }

};

//c++98��׼�е��Զ�ָ��
void test_autoPtr()
{
	auto_ptr<Report> ps(new Report("hello world!"));
	ps->comment(string("ps:"));
	auto_ptr<Report> ptr1;
	ptr1 = ps;//��ֵ��Ϻ�ps�Ѿ�ʧȥ���ڴ���������Ȩ�������ٽ���ʹ��
	ptr1->comment(string("ptr1:"));
	//ps->comment(string("after ptr1=ps: "));//error
}