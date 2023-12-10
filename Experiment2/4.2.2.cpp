#include <iostream>
#include <sstream>
using namespace std;

int parseHex(const char* const hexString) {
    int ans = 0;
    stringstream s;
    s << hex << hexString;
    s >> ans;
    return ans;
}

int main() {
    const int size = 1000;
    char s[size];
    cout << "请输入一个十六进制数: ";
    cin >> s;
    cout << "十进制为: " << parseHex(s);
    return 0;
}
