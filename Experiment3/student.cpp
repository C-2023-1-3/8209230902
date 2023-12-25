//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"           
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

void Student::set_value(int num, string name, char sex)
{
    this->num = num;
    this->name = name;
    this->sex = sex;
}