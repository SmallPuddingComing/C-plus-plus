// stl_learn.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "prioirty_queue.h"
#include "stack.h"
#include "queue.h"
#include "vector.h"
#include "set_multiset.h"
#include "map_Multimap.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "**********************" << "test priority" << endl;
	//优先级队列
	test_prioirty();

	cout << "**********************" << "test stack" << endl;
	//堆栈
	testDequeStack();
	testListStack();
	testVectorStack();

	cout << "**********************" << "test deque" << endl;
	//队列
	testDequeQueue();
	//testListQueue();//会报错
	
	cout << "**********************" << "vector test" << endl;
	//数组
	test_vector();

	cout << "**********************" << "test set and Multiset" << endl;
	//集和多集
	test_set_Multiset();

	cout << "**********************" << "test map and Multimap" << endl;
	test_map();
	test_Multimap();
}

