// test1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h> //��׼��
#include "string"
using namespace std;

#include "review_class.h"
#include "malloc_free.h"
#include "new_delete.h"

void interval()
{
	//�ָ���
	printf("\n");
	for (int i = 0; i < 40; i++)
	{
		printf("%s", "*");
	}
	printf("\n");
}

//1��ֵ����
void test(int ta, int tb)
{
	int tc = ta;
	ta = tb;
	tb = tc;
}
//2��ַ����
void test1(int *ta1, int *tb1)
{
	int c = *ta1;
	*ta1 = *tb1;
	*tb1 = c;
}
//3�����ô���
void test2(int &ta2, int &tb2)//test2(const int &ta2, const int &tb2) �����������ݲ���ֱ�Ӹı� ���ǿ��Ը��Ƹ����������ٽ��иı�
{
	int c = ta2;
	ta2 = tb2;
	tb2 = c;
}

//�ṹ��Ķ���,�ṹ���Ա����֪����С
struct MyStruct
{
	int n;
	int k;
	char str;
	string *ppp;
};

//�ṹ����
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

	interval();//�ָ���
	
	//��ϰ����
	int arry1[5] = { 1, 2, 3, 4, 5};
	//�������Խ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arry1[i]);
	}

	interval();//�ָ���

	//����Ԫ�ص���ռ�ڴ���ֽ�
	int arry2[] = {1, 2, 3, 4 };
	printf("%d\n", sizeof(arry2) / sizeof(arry2[0]));

	//����Ĳ��룬��Ҫ��λ
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

	//�����ɾ����λ
	for (int i = 4; i < 7; i++)
	{
		arry3[i] = arry3[i + 1];
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arry3[i]);
	}

	interval();//�ָ���
	//��ά����
	int t[1][2] = { 1, 30 };
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", t[i][j]);
		}
	}

	interval();//�ָ���
	//��ά���鰴һά���鷽ʽ����
	int t1[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	for (int i = 0; i < 12; i++)
	{
		printf("%d", t1[i / 4][i % 4]);
	}

	interval();//�ָ���
	//һά���鰴��ά���鷽ʽ����
	int t2[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d", t2[i * 4 + j]);
		}
	}

	interval();//�ָ���
	//�ַ�����
	char t3[5] = { 'a', 'b', 'c', 'd', 'e' };
	for (int i = 0; i < 5; i++)
	{
		printf("%c", t3[i]);
	}
	//�ַ���������Կ��ɵ����ַ�����ļ���


	//ָ������ָ�ֵ
	//1�������׵�ַ��ֵ
	int p11[3] = {};
	int *pr1 = &p11[0];
	
	//2��������ַ
	int pb = 12;
	int *pr2 = &pb;

	//3��ָ��֮�丳ֵ
	int pa = 10;
	int *pa1 = &pa;
	int *pb1 = NULL;
	pb1 = pa1;
	printf("%d\n", *pb1);

	//4���ַ�����ֵ
	char *pr = "hello";
	printf("%s\n", pr);

	//5������ָ��
	void(*pf)();
	pf = interval;
	pf();

	//ָ�����
	int a3 = 16, *pp=&a, *pa2, *pb2;
	pa2 = pp + 3 * sizeof(int);
	pb2 = pp - 2 * sizeof(int);
	printf("%s,%s", pa2, pb2);

	//����ָ��
	int (*pt)[2][3] = {};

	//ָ������
	int * ptt[2][2] = {};

	//����ָ��
	char *ps[] = { "Basic", "hello", "is", "world" };
	char ** pps;
	for (int i = 0; i < 4; i++)
	{
		pps = ps + i;
		printf("%s", *pps);
	}

	pf();
	//����,���ڴ�ռ����ȡ����(���)
	int q = 10;
	int &w = q;
	printf("%d,%d\n", q, w);
	//��������ʱ���Ը��κ����ݳ�ʼ��
	const char &e = 1;
	const char &r = q;
	printf("%d,%d\n", e, r);
	//void a(int &a, int&b){}����������������

	//����
	int tap = 3, tbp = 4;
	test(tap, tbp);
	printf("%d,%d\n", tap, tbp);

	test1(&tap, &tbp);
	printf("%d,%d\n", tap, tbp);

	test2(tap, tbp);
	printf("%d,%d\n", tap, tbp);

	//�ڴ溯��
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
		free(h);//����ָ��ָ��ָ����ڴ��ͷ�
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
	//�⺯��
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

	//�ṹ��
	string s =  "hello world" ;
	MyStruct person;
	person.n = 10;
	person.k = 20;
	person.str = 'A';
	person.ppp = &s;
	string addr = *(person.ppp);
	printf("%d,%d,%c,%s", person.n, person.k, person.str, addr.c_str());
	printf("%s", s.c_str());

	//�ṹ����
	Hero boy[3] = { { 100, 200, "1001" }, { 120, 230, "1002" }, { 130, 230, "1003" } };

	//�ṹָ��,�õĲ��ࡣ�ر��Ǻ������ε�ʱ�򣬲�����ʹ�ã���Ϊʱ��Ϳռ�� �����ܴ�
	MyStruct *ptr = NULL;

	//�ڴ�Ķ�̬���������ڴ���ͷ�
	int *per = new int; // equal to :int *per = (int *)malloc(sizeof(int));
	*per = 11;

	int *per1 = new int(64);//per1ָ��һ��ֵΪ64��int����
	if (per1)
	{
		delete per1;
		per1 = NULL;
	}
	
	int *per2 = new int[3];//������3��δ��ʼ��int������׵�ַ����������һά����
	if (per2)
	{
		delete per2;
		per2 = NULL;
	}

	//new һ����̬�Ķ�ά����
	int **pk = new int *[3];
	for (int i = 0; i < 3; i++)
	{
		*(pk + i) = new int [3];
	}

	interval();
	MyHero *app = new MyHero;
	printf("%d\t", app->GetFightValue());
	app->showName();

	//������malloc�����ڴ�ռ�
	cout << endl;
	test_malloc();
	//����new���ٵ��ڴ�ռ�
	test_new();
	UseMallocFree();
	UseNewDelete();
	
}

