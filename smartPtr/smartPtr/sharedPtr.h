#include <memory>
#include <iostream>
using namespace std;

//Դ��boots�⣬����������ָ�������ָ��;
//����ʹ�õ���ģ��;
//shared_ptr�����ڹ���new��̬������������ָ�룬
//��������*��->��������ģ��ԭʼָ�����Ϊ���ṩ��ʽbool����ת�����ж�ָ�����Ч�ԣ�
//get()�������Եõ�ָ��ԭʼָ�룬����û���ṩָ������������

template < class T>
class shared_ptr
{
public:
	typedef T element_type;
	//
	shared_ptr(); //����һ����ָ��shared_ptr
	template<class Y> 
	explicit shared_ptr(Y *p);
	template<class Y, class D> 
	shared_ptr(Y *p, D d);//���ָ������T��ָ��p����Ȩ��ͬʱ���ü�������Ϊ1
	~shared_ptr();
	//
	shared_ptr(shared_ptr const & r);//����shared_ptr����һ��ָ�����Ȩ
	template<calss Y> 
	explicit shared_ptr(std::auto_ptr<Y> & r);
	//
	shared_ptr &operator=(shared_ptr const & r);
	template<class Y> shared_ptr &operator=(shared_ptr<Y> const &r);
	template<class Y> shared_ptr &operator=(std::auto_ptr<Y> & r);
	//
	void reset();//�����ü�������1��ָֹͣ��Ĺ���
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