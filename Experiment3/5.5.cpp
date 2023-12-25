#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x,int y):m_X(x),m_Y(y){}

    void setPoint(int i, int j)
    {
        m_X += i;
        m_Y += j;
    }

    void display()
    {
        cout << "�õ�����Ϊ: (" << m_X << " , " << m_Y << " )" << endl;
    }

private:
    int m_X;
    int m_Y;
};

int main() {
    Point p(60, 80);
    int i, j;
    cout << "��ֱ�����õ�����ƽ�ƺ�����ƽ�Ƶĳ���" << endl;
    cin >> i;
    cin >> j;
    p.setPoint(i, j);
    p.display();
    return 0;
}