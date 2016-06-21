#include <memory>
#include <iostream>
using namespace std;

//源自boots库，是最像智能指针的智能指针;
//其中使用到了模板;
//shared_ptr是用于管理new动态分配对象的智能指针，
//它重载了*和->操作符以模仿原始指针的行为，提供隐式bool类型转换以判断指针的有效性，
//get()函数可以得到指针原始指针，并且没有提供指针算术操作。

template < class T>
class shared_ptr
{
public:
	typedef T element_type;
	//
	shared_ptr(); //创建一个空指针shared_ptr
	template<class Y> 
	explicit shared_ptr(Y *p);
	template<class Y, class D> 
	shared_ptr(Y *p, D d);//获得指向类型T的指针p管理权，同时引用级数设置为1
	~shared_ptr();
	//
	shared_ptr(shared_ptr const & r);//两个shared_ptr共享一个指针管理权
	template<calss Y> 
	explicit shared_ptr(std::auto_ptr<Y> & r);
	//
	shared_ptr &operator=(shared_ptr const & r);
	template<class Y> shared_ptr &operator=(shared_ptr<Y> const &r);
	template<class Y> shared_ptr &operator=(std::auto_ptr<Y> & r);
	//
	void reset();//将引用计数器减1，停止指针的共享
	template<class Y> 
	void reset(Y * p);
	template<class Y, class D> 
	void reset(Y * p, D d);
	//
	T & operator*()const;
	T * operator->() const;
	T * get() const;
	//
	bool unqiue() const;
	long use_count() const;
	//
	operator unspecified - bool - type() const;
	void swap(shared_ptr & b);
};