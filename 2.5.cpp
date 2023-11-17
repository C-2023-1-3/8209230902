#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int letter = 0, space = 0, num = 0, other = 0;
    cout << "请输入字符串: ";
    getline(cin, str);
    for (auto sign : str) {
        if (sign >= 'A' && sign <= 'z') {
            letter++;
        }
        else if (sign == ' ') {
            space++;
        }
        else if (sign >= '1' && sign <= '9') {
            num++;
        }
        else{
            other++;
        }
    }
    cout << "英文字母有" << letter << "个,"
        << "空格有" << space << "个,"
        << "数字有" << num << "个,"
        << "其他字符" << other << "个!!";
    return 0;
}