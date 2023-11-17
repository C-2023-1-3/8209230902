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
        cout << "除数不能等于0!!" << endl;
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
                cout << "小数不能取余!!!!";
            }
            break;
        default:
            cout << "运算符非法!!";
            break;
        }
    }
    return 0;
}