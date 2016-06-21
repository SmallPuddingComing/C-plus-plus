#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> INTVECTOR;//�Զ�������INIVECTOR


void outVec(INTVECTOR vec1)
{
	//����һ����ΪI��˫�������
	INTVECTOR::iterator i;
	for (i = vec1.begin(); i != vec1.end(); ++i)
	{
		cout << *i << "";
	}
	cout << endl;
}

//����vector�����Ĺ���
void test_vector()
{
	INTVECTOR vec1;
	INTVECTOR vec2(10, 6);//10��ֵΪ6��Ԫ��
	//vec3���������3��ֵΪ6��Ԫ�أ���������
	INTVECTOR vec3(vec2.begin(), vec2.begin() + 3);
	//����һ����ΪI��˫�������
	INTVECTOR::iterator i;
	//��ǰ�����ʾvec1�е�����
	cout << "vec1.begin() --- vec1.end():" << endl;
	outVec(vec1);

	//��ǰ�����ʾvec2�е�����
	cout << "vec2.begin() --- vec2.end():" << endl;
	outVec(vec2);

	//��ǰ�����ʾvec3�е�����
	cout << "vec3.begin() --- vec3.end():" << endl;
	outVec(vec3);

	//������Ӳ����Ա������vector��֧�ִ�ǰ����
	vec1.push_back(1);
	vec1.push_back(4);
	vec1.push_back(6);
	vec1.insert(vec1.begin() + 1, 5);//��vec1��һ��λ���ϲ���һ����ԱֵΪ5
	//vec1��һ��λ�ò���vec3�����г�Ա
	vec1.insert(vec1.begin() + 1, vec3.begin(), vec3.end());
	outVec(vec1);
	cout << "insert fist data" << endl;
	vec1.insert(vec1.begin(), 100);
	cout << "insert some data" << endl;
	outVec(vec1);

	//���Ը�ֵ��Ա����
	vec2.assign(8, 1);//���¸�vec2��ֵ��8����Ա��ʼ��ֵ����1
	cout << "vec2.assgin(8,1)" << endl;
	outVec(vec2);

	//�����Ƴ���ɾ��
	vec1.pop_back();//�����һ��Ԫ���Ƴ�vec1
	cout << "pop last data" << endl;
	outVec(vec1);
	vec1.erase(vec1.begin() + 1, vec1.end() - 2);//ɾ����Ա
	cout << "vec1 pop_back() and vec1.erase():" << endl;
	outVec(vec1);

	//��ʾ���е�״̬��Ϣ
	cout << "vec1 size: " << vec1.size() << endl;
	cout << "vec1 empty: " << vec1.empty() << endl;
}