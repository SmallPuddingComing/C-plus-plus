// smartPtr.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "auto_ptr.h"
#include <string>

class A
{
public:
	A(){}
	~A(){}

};

//���Ժ�����ռ�ֽڴ�С��ʲô�йأ�������ֵ
double test()
{
	int aa = 1;
	float bb = 2;
	double dd = aa + bb;
	return 0.0;
}

//���������鴫�ε�ʹ�ã�������ʵ��������׵�ַ
char* fun(char *p, int len)
{
	char * buffer = new char[len + 1];
	memcpy(buffer, p, len);
	return buffer;
}

int _tmain(int argc, _TCHAR* argv[])
{
	test_autoPtr();

	int a = 10;
	printf("int %d\n", sizeof a); //sizeof ʽ����� ���ڱ��������ǲ���Ҫ���ŵ�
	short b = 20;
	printf("short %d\n", sizeof(b));
	char c = 'q';
	printf("char %d\n", sizeof(c));
	double d = 1.0l;
	printf("double %d\n", sizeof(d));
	float f = 2.4f;
	printf("flaot: %d\n", sizeof(f));
	char *p = NULL;
	printf("prt: %d\n", sizeof(p));

	cout << endl;
	A a1 = A();
	printf("%d\n", sizeof a1);

	printf("%d\n", sizeof test() );//��ʾ�ĺ�������ֵ��������ռ���ֽ�
	
	char a2[] = { 'a', 'b', 'c' };
	char * ptr = fun(a2, sizeof(a2));
	for (int i = 0; i < sizeof(a2); i++)
	{
		printf("%c\n", *(ptr + i));
	}
}

