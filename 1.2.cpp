#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    float r,h;
    cout << "����뾶,��" << endl;
    cin >> r >> h;
    float v = PI * r * r * h / 3;
    cout << "���Ϊ" << v << endl;
    return 0;
}