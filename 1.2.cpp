#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    float r,h;
    cout << "输入半径,高" << endl;
    cin >> r >> h;
    float v = PI * r * r * h / 3;
    cout << "体积为" << v << endl;
    return 0;
}