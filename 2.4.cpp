#include <iostream>
using namespace std;
bool isInt(float num) {
    if (num - int(num) == 0) {
        return 1;
    }
    else return 0;
}
int main() {
    float x, y;
    char sign;
    cin >> x >> sign >> y;
    if (sign == '/' && y == 0) {
        cout << "�������ܵ���0!!" << endl;
    }
    else {
        switch (sign) {
        case '+':
            cout << x + y;
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << x * y;
            break;
        case '/':
            cout << x / y;
            break;
        case '%':
            if (isInt(x) && isInt(y)) {
                cout << int(x) % int(y);
            }
            else {
                cout << "С������ȡ��!!!!";
            }
            break;
        default:
            cout << "������Ƿ�!!";
            break;
        }
    }
    return 0;
}