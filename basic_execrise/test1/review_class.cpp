#include "stdafx.h"
#include "string"
#include "review_class.h"
using namespace std;
#pragma once

MyHero::MyHero(void) :m_hp(100), m_mp(200), m_fightValue(1000), m_name("hero component")
{
	
}

MyHero::~MyHero(void)
{

}

int MyHero::GetHp()
{
	return  m_hp;
}

int MyHero::GetMp()
{
	return m_mp;
}

int MyHero::GetFightValue()
{
	return m_fightValue;
}

void MyHero::showName()
{
	string *p = &m_name;
	string value = *p;
	printf("%s", value.c_str());
}



