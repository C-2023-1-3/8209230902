//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"           
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}

void Student::set_value(int num, string name, char sex)
{
    this->num = num;
    this->name = name;
    this->sex = sex;
}