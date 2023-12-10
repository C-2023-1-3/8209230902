#include <iostream>
using namespace std;

int indexOf(char* s1,char* s2) {
    int mark, same_num = 0, s1_mark = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - 1; i++) { //����s2,����s2���ĸ��ַ���s1����ĸһ��
        if (s1[0] == s2[i]) {
            mark = i;
            if (len2 - mark < len1) { //s2ʣ�಻��ֱ��ͣ
                return -1;
            }
            else {
                for (int j = mark; j <= mark + len1 - 1; j++) {   //ѭ������s2���Ӧλ�����ַ�
                    if (s1[s1_mark] == s2[j]) {
                        same_num++;
                        s1_mark++;
                    }
                    else {
                        same_num = 0; //������ͬ�ַ���
                        break;
                    }
                    if (same_num == len1) {
                        return mark;
                    }
                }
            }
        }
    }
    return -1;
}

int main() {
    const int size = 1000;
    char s1[size], s2[size];
    cout << "�����һ���ַ���s1: ";
    cin.getline(s1, size);
    cout << "����ڶ����ַ���s2: ";
    cin.getline(s2, size);
    cout << "indexOf( " << s1 << " , " << s2 << " )is " << indexOf(s1, s2);
    return 0;
}
