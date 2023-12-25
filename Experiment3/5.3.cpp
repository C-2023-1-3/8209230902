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
        cout << "该长方体体积为: " << this->Area() << endl;
    }

    int m_Length;
    int m_Width;
    int m_Height;
};

int main() {

    Cuboid c1, c2, c3;
    cout << "请分别输入第一个长方体的长宽高: " << endl;
    c1.setCuboid();
    c1.printArea();
    cout << "请分别输入第二个长方体的长宽高: " << endl;
    c2.setCuboid();
    c2.printArea();
    cout << "请分别输入第三个长方体的长宽高: " << endl;
    c3.setCuboid();
    c3.printArea();
    return 0;
}