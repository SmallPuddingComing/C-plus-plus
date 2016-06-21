#include<ostream>
using namespace std;
class ReplaceAlgorithm
{
public:
	virtual void Replace() = 0;
};

class ULR_ReplaceAlgroithm :public ReplaceAlgorithm
{
public:
	void Replace(){ cout << "ULR algorithm" << endl; }
};

class FIFO_ReplaceAlgorithm : public ReplaceAlgorithm
{
public:
	void Replace(){ cout << "First In First Out Algorithm" << endl; }
};

class Random_ReplaceAlgorithm :public ReplaceAlgorithm
{
public:
	void Replace(){ cout << "random algorithm" << endl; }
};

//策略模式
// 方法一
class Cache
{
public:
	Cache(ReplaceAlgorithm* re){ m_ra = re; }
	~Cache(){}
	void Replace(){ m_ra->Replace(); }
private:
	ReplaceAlgorithm * m_ra;
};
//Cache cache = new Cache(new ULR_ReplaceAlgroithm) //会直接暴露定义

//方法二

enum RE{URL, FIFO, RANDOM};
class Cache_1
{
public:
	Cache_1(RE re)
	{
		switch (re)
		{
		case URL:
			m_ra = new ULR_ReplaceAlgroithm();
			break;
		case FIFO:
			m_ra = new FIFO_ReplaceAlgorithm();
			break;
		case RANDOM:
			m_ra = new Random_ReplaceAlgorithm();
			break;
		default:
			break;
		}
	}
	~Cache_1(){}
	void Replace(){ m_ra->Replace(); }
private:
	ReplaceAlgorithm * m_ra;
};
//只需要给个标签就行，不会直接暴露定义
//思考下，前两种都是需要初始化构造函数传参，能不能不需要传参的这种情况

//方法三、使用类模板
template<class RA>
class Cache_2
{
public:
	Cache_2(){}
	~Cache_2(){}
	void Replace(m_ra.Replace();)
private:
	RA m_ra;
};
//Cache_2 <Random_ReplaceAlgorithm> cache;
//cache.Replace();
