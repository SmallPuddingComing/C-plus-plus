#include <iostream>
#include<set>//set中包含了multiset
#include <vector>
using namespace std;

void test_set_Multiset()
{
	set<int> set1;
	for (int i = 0; i < 10; i++)
	{
		set1.insert(i);
	}
	for (set<int>::iterator iter = set1.begin(); iter != set1.end(); iter++)
	{
		cout << "" << *iter;
	}
	cout << endl;

	vector<int> vec1;
	for (int i = 0; i < 5; i++)
	{
		vec1.push_back(i);
	}
	set<int> set2;
	//set2(vec1.begin(), vec1.end());
	set2.insert(200);
	
	if (set1.insert(1).second)//插入成功返回1，否则返回0,判断重复元素
	{
		cout << "set insert number is success" << endl;
	}
	else
	{
		cout << "set insert number is failuer" << endl;
	}

	//允许重复元素存在
	int a[] = { 4, 1, 1, 1, 2, 4, 3, 5 };
	multiset<int> A;
	A.insert(set1.begin(), set1.end());
	A.insert(a, a + 4);
	cout << "out the multiset";
	for (multiset<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it <<" ";
	}
	cout << endl;
}