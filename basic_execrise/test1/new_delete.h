#include <string>
#include <iostream>
using namespace std;

void test_new()
{
	int* a = new int(8);//申请一个整型变量空间，赋初值为4，并且定义一个整型指针a指向该地址
	printf("%d\n", sizeof a);
	printf("%d\n", *a);
	for (int i = 0; i < sizeof(a); i++)
	{
		*(a + i) = i;
	}
	for (int i = 0; i < sizeof(a); i++)
	{
		printf("%d\n", *(a + i));
	}

	int *b = new int[10];//申请10个整型变量的空间，没有赋初值，并定义一个整型指针a指向该地址空间首地址。
	if (a!=NULL)
	{
		delete a;
		a = NULL;
	}
	
}

class Obj
{
public:
	Obj(){}
	~Obj(){}

	void Init(){cout << "init class" << endl;}
	void Destory(){ cout << "Destory" << endl; }

};

void UseMallocFree()
{
	Obj *object = (Obj*)malloc(sizeof(Obj));//申请动态内存
	object->Init();//初始化
	//...
	object->Destory();//清除
	free(object);	  //释放内存
}

void UseNewDelete()
{
	Obj * a = new Obj;//申请动态内存并且初始化
	//...
	delete a;//释放内存并且清除
}