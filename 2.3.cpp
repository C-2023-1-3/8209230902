#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "�����������ε�������";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        cout << "�����ε��ܳ�Ϊ: " << a + b + c << endl;
        if (a == b || a == c || b == c) {
            cout << "���������ǵ���������";
        }
        else {
            cout << "�������β��ǵ���������";
        }
    }
    else {
        cout << "�����޷�����������!";
    }
    return 0;
}