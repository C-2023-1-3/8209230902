#pragma once
#include <iostream>
using namespace std;
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student	          //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num, string name, char sex);
private:
	int num;
	string name;
	char sex;
};
