#include <stdio.h>

enum CYTPE
{
	IMAGE_BUTTON,
	INPUT_BUTTON,
	FLASH_BUTTON
};

struct Rect
{
	int m_Width;
	int m_Lenght;
};

class Button
{
public:
	Button();
	virtual ~Button();
public:
	void getMsg();
	int m_layer;
	Rect m_rect;
	bool m_isHit;
};

class Image :public Button
{
public:
	Image();
	~Image();
private:
};

class Input :public Button
{
public:
	Input();
	~Input();

};

class Flash :public Button
{
public:
	Flash();
	~Flash();

private:

};



class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();

	Button* CreateButtonType(enum CTYPE cytpe)
	{
		if (cytpe == IMAGE_BUTTON)
		{
			return new Image();
		}
		else if (cytpe == INPUT_BUTTON)
		{
			return new Input();
		}
		else if (cytpe == FLASH_BUTTON)
		{
			return new Flash();
		}
		else
		{
			return NULL;
		}
	}
};