#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "请输入三角形的三条边";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        cout << "三角形的周长为: " << a + b + c << endl;
        if (a == b || a == c || b == c) {
            cout << "该三角形是等腰三角形";
        }
        else {
            cout << "该三角形不是等腰三角形";
        }
    }
    else {
        cout << "三边无法构成三角形!";
    }
    return 0;
}