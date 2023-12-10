#include <iostream>
using namespace std;

int maxCommon(int num1, int num2) {
    int temp,t;
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0) {
        t = num1 % num2;
        num1 = num2;
        num2 = t;
    }
    return num1;
}

int minCommon(int num1, int num2) {
    int temp;
    temp = maxCommon(num1, num2);
    return (num1 * num2 / temp);
}

int main() {
    int num1, num2;
    cout << "请输入两个数 " << endl;
    cin >> num1 >> num2;
    cout << "最小公倍数为 " << minCommon(num1, num2) << endl;
    cout << "最大公约数为 " << maxCommon(num1, num2) << endl;
    return 0;
}