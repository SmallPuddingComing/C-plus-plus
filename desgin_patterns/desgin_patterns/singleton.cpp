#include "stdafx.h"
#include "singleton.h"

static Singleton* singleton = NULL;
Singleton* Singleton::GetInstance(const char* name)
{
	if (singleton == NULL)
	{
		if (strcmp(name, "SingletonA"))
		{
			singleton = new SingletonA();
		}
		else if (strcmp(name, "SingletonB"))
		{
			singleton = new SingletonB();
		}
		else
		{
			singleton = new Singleton();
		}
		
	}
	return singleton;
}