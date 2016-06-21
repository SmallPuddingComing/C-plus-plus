// desgin_patterns.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "adapter_pattern.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Queue <float>queue ;
	queue.push(1.2);
	queue.push(2.5);
	queue.pop();
	Stack <int>stack;
	stack.push(3);
	stack.pop();
}

