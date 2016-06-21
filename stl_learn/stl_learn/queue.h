#include <iostream>
#include <queue>
#include <iterator>
#include<list>
using namespace std;

queue<int> intDequeQueue;
queue<int, list<int>> intListQueue;
//队列中没有迭代器，因为只能先进先出

void testDequeQueue()
{
	for (int i = 0; i < 10; i++)
	{
		intDequeQueue.push(i);
	}
	
	while (!intDequeQueue.empty())
	{
		cout << intDequeQueue.front() << endl;
		//cout << intDequeQueue.back() << endl;
		intDequeQueue.pop();
	}

}

//这里的链表适配器的队列貌似是不能进行元素删除的
void testListQueue()
{
	for (int i = 0; i < 10; i++)
	{
		intListQueue.push(i);
	}

	while (!intListQueue.empty())
	{
		cout << intListQueue.front() << endl;
		intDequeQueue.pop();
		//cout << intListQueue.back() << endl;
	}
}