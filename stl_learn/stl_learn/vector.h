#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> INTVECTOR;//自定义类型INIVECTOR


void outVec(INTVECTOR vec1)
{
	//声明一个名为I的双向迭代器
	INTVECTOR::iterator i;
	for (i = vec1.begin(); i != vec1.end(); ++i)
	{
		cout << *i << "";
	}
	cout << endl;
}

//测试vector容器的功能
void test_vector()
{
	INTVECTOR vec1;
	INTVECTOR vec2(10, 6);//10个值为6的元素
	//vec3对象最初有3个值为6的元素，拷贝构造
	INTVECTOR vec3(vec2.begin(), vec2.begin() + 3);
	//声明一个名为I的双向迭代器
	INTVECTOR::iterator i;
	//从前向后显示vec1中的数据
	cout << "vec1.begin() --- vec1.end():" << endl;
	outVec(vec1);

	//从前向后显示vec2中的数据
	cout << "vec2.begin() --- vec2.end():" << endl;
	outVec(vec2);

	//从前向后显示vec3中的数据
	cout << "vec3.begin() --- vec3.end():" << endl;
	outVec(vec3);

	//测试添加插入成员函数，vector不支持从前插入
	vec1.push_back(1);
	vec1.push_back(4);
	vec1.push_back(6);
	vec1.insert(vec1.begin() + 1, 5);//在vec1第一个位置上插入一个成员值为5
	//vec1第一个位置插入vec3的所有成员
	vec1.insert(vec1.begin() + 1, vec3.begin(), vec3.end());
	outVec(vec1);
	cout << "insert fist data" << endl;
	vec1.insert(vec1.begin(), 100);
	cout << "insert some data" << endl;
	outVec(vec1);

	//测试赋值成员函数
	vec2.assign(8, 1);//重新给vec2赋值，8个成员初始化值都是1
	cout << "vec2.assgin(8,1)" << endl;
	outVec(vec2);

	//测试移出和删除
	vec1.pop_back();//将最后一个元素移除vec1
	cout << "pop last data" << endl;
	outVec(vec1);
	vec1.erase(vec1.begin() + 1, vec1.end() - 2);//删除成员
	cout << "vec1 pop_back() and vec1.erase():" << endl;
	outVec(vec1);

	//显示序列的状态信息
	cout << "vec1 size: " << vec1.size() << endl;
	cout << "vec1 empty: " << vec1.empty() << endl;
}