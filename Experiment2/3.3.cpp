#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
    double a, b, c;
    cout << "请输入三角形三边" << endl;
    cin >> a >> b >> c;
    if (is_valid(a, b, c)) {
        cout << "面积为: " << area(a, b, c);
    }
    else {
        cout << "三边无法组成三角形!!" << endl;
    }
    return 0;
}