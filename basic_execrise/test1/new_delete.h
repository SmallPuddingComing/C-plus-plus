#include <string>
#include <iostream>
using namespace std;

void test_new()
{
	int* a = new int(8);//����һ�����ͱ����ռ䣬����ֵΪ4�����Ҷ���һ������ָ��aָ��õ�ַ
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

	int *b = new int[10];//����10�����ͱ����Ŀռ䣬û�и���ֵ��������һ������ָ��aָ��õ�ַ�ռ��׵�ַ��
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
	Obj *object = (Obj*)malloc(sizeof(Obj));//���붯̬�ڴ�
	object->Init();//��ʼ��
	//...
	object->Destory();//���
	free(object);	  //�ͷ��ڴ�
}

void UseNewDelete()
{
	Obj * a = new Obj;//���붯̬�ڴ沢�ҳ�ʼ��
	//...
	delete a;//�ͷ��ڴ沢�����
}