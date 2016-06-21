#include <iostream>
using namespace std; //ÃüÃû¿Õ¼ä


class MyHero
{
public:
	MyHero();
	~MyHero();
	void init();
	int GetHp();
	int GetMp();
	int GetFightValue();
	void showName();
private:
	int m_hp;
	int m_mp;
	int m_fightValue;
	string m_name;
};