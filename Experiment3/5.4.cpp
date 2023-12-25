#include <iostream>
using namespace std;

class Student
{
public:
    Student(int num,int score):m_Num(num),m_Score(score){}

    int m_Num;
    int m_Score;
};

void max(Student* s)
{
    Student temp(0,0);
    temp = s[0];
    for (int i = 0; i <= 4; i++)
    {
        if (temp.m_Score <= s[i].m_Score)
        {
            temp = s[i];
        }
    }
    cout << "成绩最高者学号为: " << temp.m_Num << endl;
    cout << "其成绩为: " << temp.m_Score << endl;
}

int main() {
    Student s[5] = {
        Student(1,90),
        Student(2,99),
        Student(3,91),
        Student(4,85),
        Student(5,87)
    };
    max(s);
    return 0;
}