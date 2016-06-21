#include <iostream>
#include <map>
#include <string>
using namespace std;

void test_map()
{
	map<string, int> map1;
	map1["one"] = 1;
	map1["two"] = 2;

	map<string, int> ::iterator iterMap;
	for (iterMap=map1.begin(); iterMap!=map1.end(); iterMap++)
	{
		cout << "out map key and value: " << (*iterMap).first << (*iterMap).second << endl;
	}

	map<string, int>::iterator ptr;
	ptr = map1.find("one");
	cout << "out find element value: " << (*ptr).second << endl;
	
}

void test_Multimap()
{
	multimap<string, string> B;
	//初始化多重映射
	typedef multimap<string, string>::value_type vt;
	typedef string s;

	B.insert(vt(s("Tom"), s("is a student")));
	B.insert(vt(s("Bob"), s("is a boy")));
	B.insert(vt(s("Jerry"), s("is a girl")));
	B.insert(vt(s("Hub"), s("is a teacher")));
	B.insert(vt(s("Anna"), s("is a boy")));

	multimap<string, string>::iterator ptr;
	for (ptr = B.begin(); ptr != B.end(); ptr++)
	{
		cout << (*ptr).first << " value is :" << (*ptr).second << endl;
	}

	multimap<string, string>::iterator tempPtr;
	tempPtr = B.find("Anna");
	for (ptr = B.begin(); ptr != B.end(); ptr++)
	{
		if ((*tempPtr).second == (*ptr).second)
		{
			cout << "find the element key: " << (*ptr).first << endl;
		}
	}

	multimap<string, string>::iterator tempPtr2 = B.begin();
	while ((*tempPtr2).first == "Jerry")
	{
		cout << "find the name jerry " << (*tempPtr2).second ;
		++tempPtr2;
	}

}