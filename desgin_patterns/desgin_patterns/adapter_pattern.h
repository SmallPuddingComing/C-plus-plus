#include <iostream>
using namespace std;

template<class D_T>
class MyDque
{
public:
	MyDque(){}
	~MyDque(){}
public:
	D_T m_x;
	MyDque* m_pfront;
	MyDque* m_pback;
};

template <class Type>
class Deque
{
public:
	Deque(){m_data = new MyDque()}
	~Deque(){}
	void push_back(Type t)
	{ 
		cout << "this is push_back number: " << t << endl;
	}
	void push_front(Type t){ cout << "this is push_front number: " << t << endl; }
	void pop_back(){ cout << "this is pop_back number: " << endl; }
	void pop_front(){ cout << "this is pop_front number: " << endl; }
private:
	MyDeque* m_data;
};

template <class T>
class Sequence
{
public:
	Sequence(){}
	~Sequence(){}
	virtual void push(T t) = 0;
	virtual void pop() = 0;
};

template<class TT>
class Queue :public Sequence<TT>
{
public:
	Queue(){}
	~Queue(){}
	void push(TT t){ deque.push_back(t); }
	void pop(){ deque.pop_front(); }
private:
	Deque <TT>deque;
};

template<class TT>
class Stack :public Sequence<TT>
{
public:
	Stack(){}
	~Stack(){}
	void push(TT t){ deque.push_front(t); }
	void pop(){ deque.pop_back(); }
private:
	Deque <TT>deque;
};
//此处用到了模板类和适配器，实现队列和栈，发现其实现的组合意义