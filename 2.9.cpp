#include <iostream>
using namespace std;
int main() {
    float price = 0.8;
    float money = 0,day = 1;
    for (int i = 2; i <= 100; i *= 2) {
        money += i * price;
        day++;
    }
    cout << "ƽ��ÿ�컨 " << money / day << "Ԫ";
    return 0;
}