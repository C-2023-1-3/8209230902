#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int letter = 0, space = 0, num = 0, other = 0;
    cout << "�������ַ���: ";
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
    cout << "Ӣ����ĸ��" << letter << "��,"
        << "�ո���" << space << "��,"
        << "������" << num << "��,"
        << "�����ַ�" << other << "��!!";
    return 0;
}