#include <iostream>
using namespace std;
int main() {
    double a,b;
    cin >> a;
    double num1 = 1, num2 = 1.1;
    while ((num1 - num2) > 1e-5 || (num1 - num2) < - 1e-5) {
        num2 = num1;
        num1 = 0.5 * (num2 + a / num2);
    }
    cout << num2;
    return 0;
}