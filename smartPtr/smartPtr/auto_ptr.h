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

//c++98标准中的自动指针
void test_autoPtr()
{
	auto_ptr<Report> ps(new Report("hello world!"));
	ps->comment(string("ps:"));
	auto_ptr<Report> ptr1;
	ptr1 = ps;//赋值完毕后ps已经失去对内存对象的所有权，不能再进行使用
	ptr1->comment(string("ptr1:"));
	//ps->comment(string("after ptr1=ps: "));//error
}