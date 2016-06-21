#include <iostream>
#include <queue>
#include <iterator>
#include<list>
using namespace std;

queue<int> intDequeQueue;
queue<int, list<int>> intListQueue;
//������û�е���������Ϊֻ���Ƚ��ȳ�

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

//����������������Ķ���ò���ǲ��ܽ���Ԫ��ɾ����
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