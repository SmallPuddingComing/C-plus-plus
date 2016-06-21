// test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h> //标准库
#include "string"
using namespace std;

#include "review_class.h"
#include "malloc_free.h"
#include "new_delete.h"

void interval()
{
	//分隔符
	printf("\n");
	for (int i = 0; i < 40; i++)
	{
		printf("%s", "*");
	}
	printf("\n");
}

//1、值传递
void test(int ta, int tb)
{
	int tc = ta;
	ta = tb;
	tb = tc;
}
//2、址传递
void test1(int *ta1, int *tb1)
{
	int c = *ta1;
	*ta1 = *tb1;
	*tb1 = c;
}
//3、引用传递
void test2(int &ta2, int &tb2)//test2(const int &ta2, const int &tb2) 传进来的数据不能直接改变 但是可以复制个其他变量再进行改变
{
	int c = ta2;
	ta2 = tb2;
	tb2 = c;
}

//结构体的定义,结构体成员必须知道大小
struct MyStruct
{
	int n;
	int k;
	char str;
	string *ppp;
};

//结构数组
struct Hero
{
	int hp;
	int mp;
	string id;
}boy[3];

int _tmain(int argc, _TCHAR* argv[])
{
	int a=2, b =1;
	printf("%d,%d\n", a, b);

	const int c = 10;
	printf("%d\n", c);
	int *p = (int *)&c;
	*p = 5;
	printf("%d,%d\n", *p, c);

	//const number can not change 
	int d = 20;
	printf("%d\n", d);
	int *p1 = &d;
	*p1 = 10;
	printf("%d,%d\n", *p1, d);

	string mystring = "i love you";
	string s1 = "1";
	int inte_1 = 10;
	printf("%d,%d,%d\n", sizeof(mystring), sizeof(s1), sizeof(inte_1));//result:28

	if (0 == (a / b))
	{
		printf("%s\n", "aaaa");
	}
	else
	{
		printf("%s\n", "bbbb");
	};

	switch (b)
	{
	case 2:
		printf("%s\n", "a");
		break;
	case 1:
	{
			  a = a + b;
			  printf("%d\n", a);
	};
		break;
	default:
		break;
	}

	//fibonaci
	int arry[3];
	arry[0] = 1, arry[1] = 1;
	printf("%d, %d ", arry[0], arry[1]);
	for (int i = 0; i < 30; i++)
	{
		arry[2] = arry[0] + arry[1];
		printf("%d, ", arry[2]);
		arry[0] = arry[1];
		arry[1] = arry[2];
	}

	interval();//分隔符
	
	//练习数组
	int arry1[5] = { 1, 2, 3, 4, 5};
	//数组访问越界
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arry1[i]);
	}

	interval();//分隔符

	//单个元素的所占内存的字节
	int arry2[] = {1, 2, 3, 4 };
	printf("%d\n", sizeof(arry2) / sizeof(arry2[0]));

	//数组的插入，需要移位
	int arry3[] = { 1, 3, 5, 6, 7, 8, 0 };
	for (int i = 5; i >=1; i--)
	{
		arry3[i + 1] = arry3[i];
	}
	arry3[1] = 2;
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arry3[i]);
	}

	//数组的删除移位
	for (int i = 4; i < 7; i++)
	{
		arry3[i] = arry3[i + 1];
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arry3[i]);
	}

	interval();//分隔符
	//二维数组
	int t[1][2] = { 1, 30 };
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", t[i][j]);
		}
	}

	interval();//分隔符
	//二维数组按一维数组方式访问
	int t1[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	for (int i = 0; i < 12; i++)
	{
		printf("%d", t1[i / 4][i % 4]);
	}

	interval();//分隔符
	//一维数组按二维数组方式访问
	int t2[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d", t2[i * 4 + j]);
		}
	}

	interval();//分隔符
	//字符数组
	char t3[5] = { 'a', 'b', 'c', 'd', 'e' };
	for (int i = 0; i < 5; i++)
	{
		printf("%c", t3[i]);
	}
	//字符串数组可以看成单个字符输出的集合


	//指针的六种赋值
	//1、数组首地址赋值
	int p11[3] = {};
	int *pr1 = &p11[0];
	
	//2、变量地址
	int pb = 12;
	int *pr2 = &pb;

	//3、指针之间赋值
	int pa = 10;
	int *pa1 = &pa;
	int *pb1 = NULL;
	pb1 = pa1;
	printf("%d\n", *pb1);

	//4、字符串赋值
	char *pr = "hello";
	printf("%s\n", pr);

	//5、函数指针
	void(*pf)();
	pf = interval;
	pf();

	//指针相加
	int a3 = 16, *pp=&a, *pa2, *pb2;
	pa2 = pp + 3 * sizeof(int);
	pb2 = pp - 2 * sizeof(int);
	printf("%s,%s", pa2, pb2);

	//数组指针
	int (*pt)[2][3] = {};

	//指针数组
	int * ptt[2][2] = {};

	//二级指针
	char *ps[] = { "Basic", "hello", "is", "world" };
	char ** pps;
	for (int i = 0; i < 4; i++)
	{
		pps = ps + i;
		printf("%s", *pps);
	}

	pf();
	//引用,无内存空间就是取别名(外号)
	int q = 10;
	int &w = q;
	printf("%d,%d\n", q, w);
	//常量引用时可以给任何数据初始化
	const char &e = 1;
	const char &r = q;
	printf("%d,%d\n", e, r);
	//void a(int &a, int&b){}还可以做参数传参

	//函数
	int tap = 3, tbp = 4;
	test(tap, tbp);
	printf("%d,%d\n", tap, tbp);

	test1(&tap, &tbp);
	printf("%d,%d\n", tap, tbp);

	test2(tap, tbp);
	printf("%d,%d\n", tap, tbp);

	//内存函数
	int *h = NULL;
	h = (int*)calloc(4, sizeof(int));
	for (int i = 0; i < 4; i++)
	{
		*(h + i) = i + 1;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("calloc:%d", *(h + i));
	}
	if (h)
	{
		free(h);//用于指向指针指向的内存释放
	}

	int *h1 = NULL;
	h1 = (int*)malloc(4 * sizeof(int));
	for (int i = 0; i < 4; i++)
	{
		*(h1 + i) = i + 1;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("malloc:%d", *(h1 + i));
	}
	if (h1)
	{
		free(h1);
	}

	interval();
	//库函数
	int *gg[16];
	memset(gg, 'a', 10);
	for (int  i = 0; i < 16; i++)
	{
		printf("%c\n", gg[i]);
	}

	char uu[20] = "abcd";
	memcpy(uu+2, uu , 5);
	for (int i = 0; i < 16; i++)
	{
		printf("%c", uu[i]);
	}

	//结构体
	string s =  "hello world" ;
	MyStruct person;
	person.n = 10;
	person.k = 20;
	person.str = 'A';
	person.ppp = &s;
	string addr = *(person.ppp);
	printf("%d,%d,%c,%s", person.n, person.k, person.str, addr.c_str());
	printf("%s", s.c_str());

	//结构数组
	Hero boy[3] = { { 100, 200, "1001" }, { 120, 230, "1002" }, { 130, 230, "1003" } };

	//结构指针,用的不多。特别是函数传参的时候，不介意使用，因为时间和空间的 开销很大。
	MyStruct *ptr = NULL;

	//内存的动态创建分配内存和释放
	int *per = new int; // equal to :int *per = (int *)malloc(sizeof(int));
	*per = 11;

	int *per1 = new int(64);//per1指向一个值为64的int对象
	if (per1)
	{
		delete per1;
		per1 = NULL;
	}
	
	int *per2 = new int[3];//分配了3个未初始化int对象的首地址，类似于是一维数组
	if (per2)
	{
		delete per2;
		per2 = NULL;
	}

	//new 一个动态的二维数组
	int **pk = new int *[3];
	for (int i = 0; i < 3; i++)
	{
		*(pk + i) = new int [3];
	}

	interval();
	MyHero *app = new MyHero;
	printf("%d\t", app->GetFightValue());
	app->showName();

	//测试下malloc开辟内存空间
	cout << endl;
	test_malloc();
	//测试new开辟的内存空间
	test_new();
	UseMallocFree();
	UseNewDelete();
	
}

