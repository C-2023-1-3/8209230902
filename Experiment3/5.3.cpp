#include <iostream>
using namespace std;

class Cuboid
{
public:
    void setCuboid()
    {
        int length, width, height;
        cin >> length;
        cin >> width;
        cin >> height;
        m_Height = height;
        m_Length = length;
        m_Width = width;
    }

    int Area()
    {
        int area = m_Height * m_Length * m_Width;
        return area;
    }

    void printArea()
    {
        cout << "�ó��������Ϊ: " << this->Area() << endl;
    }

    int m_Length;
    int m_Width;
    int m_Height;
};

int main() {

    Cuboid c1, c2, c3;
    cout << "��ֱ������һ��������ĳ����: " << endl;
    c1.setCuboid();
    c1.printArea();
    cout << "��ֱ�����ڶ���������ĳ����: " << endl;
    c2.setCuboid();
    c2.printArea();
    cout << "��ֱ����������������ĳ����: " << endl;
    c3.setCuboid();
    c3.printArea();
    return 0;
}