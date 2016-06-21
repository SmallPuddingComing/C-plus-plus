#include <iostream>
#include <stack>
#include <list>
#include <vector>
using namespace std;

stack<int> intDequeuStack;
stack<int, list<int>> intListStack;
stack<int, vector<int>> intVectorStack;

//FIFO
//底层的适配器不一样而已，实现的功能是一致的。
void testDequeStack()
{
	if (intDequeuStack.empty())
	{
		intDequeuStack.push(1);
		intDequeuStack.push(12);
	}
	while(!intDequeuStack.empty())
	{
		intDequeuStack.size();
		cout << intDequeuStack.top() << endl;
		intDequeuStack.pop();
	}
}

void testListStack()
{
	if (intListStack.empty())
	{
		intListStack.push(3);
		intListStack.push(34);
	}
	while (!intListStack.empty())
	{
		intListStack.size();
		cout << intListStack.top() << endl;
		intListStack.pop();
	}
}

void testVectorStack()
{
	if (intVectorStack.empty())
	{
		intVectorStack.push(4);
		intVectorStack.push(45);
	}
	while (!intVectorStack.empty())
	{
		intVectorStack.size();
		cout << intVectorStack.top() << endl;
		intVectorStack.pop();
	}
}