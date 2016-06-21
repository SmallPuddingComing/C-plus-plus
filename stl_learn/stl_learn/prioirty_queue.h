#include <iostream>
#include <queue>
using namespace std;


//自定义优先级
struct node
{
	int idx;
	int key;
	node(int a = 0, int b = 0)
	{
		idx = a;//优先级
		key = b;//值
	}
};

//比较函数
struct cmp
{
	bool operator()(node a, node b)
	{
		return a.key > b.key;
	}
}; 

void test_prioirty()
{
	priority_queue<node, vector<node>, cmp>q;

	int i;
	for (i = 0; i < 10; i++)
	{
		q.push(node(i, i));
	}

	while (!q.empty())
	{
		cout << q.top().idx << ":"<< q.top().key << endl;
		q.pop();
	}
}