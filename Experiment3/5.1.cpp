#include<iostream>
using namespace std;
class Time             // ����Time��
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
	Time t1;           //����t1ΪTime�����
	t1.setSec();     //�����趨��ʱ�� 
	t1.setMin();
	t1.setHour();
	t1.printTime();
	return 0;
}
