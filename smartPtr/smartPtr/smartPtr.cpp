// smartPtr.cpp : 定义控制台应用程序的入口点。
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

//测试函数所占字节大小跟什么有关，跟返回值
double test()
{
	int aa = 1;
	float bb = 2;
	double dd = aa + bb;
	return 0.0;
}

//测试下数组传参的使用，传的其实是数组的首地址
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
	printf("int %d\n", sizeof a); //sizeof 式运算符 对于变量而言是不需要括号的
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

	printf("%d\n", sizeof test() );//显示的函数返回值的类型所占的字节
	
	char a2[] = { 'a', 'b', 'c' };
	char * ptr = fun(a2, sizeof(a2));
	for (int i = 0; i < sizeof(a2); i++)
	{
		printf("%c\n", *(ptr + i));
	}
}

