#include <string>
#include <iostream>
using namespace std;

void test_malloc()
{
	char ptr[] = { 'A', 'B', 'C', 'D' };
	char *p1 = (char*)malloc(sizeof(char)* 4);
	p1 = ptr;

	for (int i = 0; i < sizeof(ptr); i++)
	{
		printf("%c\n", *(p1 + i));
	}
}
