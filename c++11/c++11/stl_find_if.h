#include<iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
	Student(string name, int id, int age)
	{
		m_name = name;
		m_id = id;
		m_age = age;
	}
	~Student(){}
	void show()
	{
		cout << "name: " << m_age << "age: " << m_age << "id: " << m_id << endl;
	}

public:
	string m_name;
	int m_id;
	int m_age;
};

class Findtheval
{
public:
	Findtheval(int x) :m_x(x){}
	bool operator()(const Student& s)
	{
		return (s.m_age == m_x);
	}
public:
	int m_x;

};


//find_if函数是模板函数
void test_find_if_func()
{
	Student s1("001", 1001, 10);
	Student s2("002", 1002, 20);
	Student s3("003", 1003, 30);
	Student s4("004", 1004, 40);
	Student s5("005", 1005, 50);
	Student s6("006", 1006, 60);

	list<Student>L;
	list<Student>::iterator it, it1;

	L.push_back(s1);
	L.push_back(s2);
	L.push_back(s3);
	L.push_back(s4);
	L.push_back(s5);
	L.push_back(s6);

	it = std::find_if(L.begin(), L.end(), Findtheval(20));//找到了第一个元素，然后进入循环找接下来的删除
	while (it!=L.end())
	{
		list<Student>::iterator temp = it++;
		L.erase(temp);
		it = std::find_if(L.begin(), L.end(), Findtheval(20));
	}
	for (it1 = L.begin(); it1 != L.end();++it1)
	{
		it1->show();
	}

}

