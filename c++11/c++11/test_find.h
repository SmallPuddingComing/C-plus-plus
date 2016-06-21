#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

void test_find_func()
{
	vector<int> my_vec;
	for (int i = 0; i < 20; i++)
	{
		my_vec.push_back(i);
	}

	list<float> my_list;
	for (int i = 0; i < 10; i++)
	{
		my_list.push_back(float(i));
	}

	//vector使用的通用的find函数
	cout << "vector use find" << endl;
	vector<int>::iterator it = find(my_vec.begin(), my_vec.end(), 5);
	if (it!=my_vec.end())
	{
		cout << *it << endl;
	}
	else
	{
		cout << "is over" << endl;
	}

	cout << "list use find" << endl;
	list<float>::iterator it_list = find(my_list.begin(), my_list.end(), 8);
	if (it_list != my_list.end())
	{
		cout << *it_list << endl;
	}
	else
	{
		cout << "is over" << endl;
	}
}