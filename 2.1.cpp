#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c > 'a' && c < 'z') {
        cout << char(c - 32) << endl;
    }
    else {
        cout << c + 1;
    }
    return 0;
}