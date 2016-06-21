// stl_learn.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//���ȼ�����
	test_prioirty();

	cout << "**********************" << "test stack" << endl;
	//��ջ
	testDequeStack();
	testListStack();
	testVectorStack();

	cout << "**********************" << "test deque" << endl;
	//����
	testDequeQueue();
	//testListQueue();//�ᱨ��
	
	cout << "**********************" << "vector test" << endl;
	//����
	test_vector();

	cout << "**********************" << "test set and Multiset" << endl;
	//���Ͷ༯
	test_set_Multiset();

	cout << "**********************" << "test map and Multimap" << endl;
	test_map();
	test_Multimap();
}

