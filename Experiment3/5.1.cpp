#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void setSec()
	{
		int temp;
		cin >> temp;
		this->sec = temp;
	}

	void setMin()
	{
		int temp;
		cin >> temp;
		this->minute = temp;
	}

	void setHour()
	{
		int temp;
		cin >> temp;
		this->hour = temp;
	}

	void printTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}

private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.setSec();     //输入设定的时间 
	t1.setMin();
	t1.setHour();
	t1.printTime();
	return 0;
}
