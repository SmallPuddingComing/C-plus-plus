#include <iostream>
#include <string>
using namespace std;

void meow(string &s)
{
	cout << "meow(string&): " << s << endl;
}

void meow(const string& s)
{
	cout << "meow(const string&):" << s << endl;
}

void meow(string&& s)
{
	cout << "meow(string&& s): " << s << endl;
}

void meow(const string && s)
{
	cout << "meow(const string&& s): " << s << endl;
}

string rvalue_func()
{
	return "rvalue func()";
}

const string const_rvalue_func()
{
	return "const rvalue func()";
}

