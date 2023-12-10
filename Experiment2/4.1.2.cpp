#include <iostream>
using namespace std;

void bubble(double* arr,int len){
    double temp;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    double arr[10];
    for (int i = 0; i <= 9; i++) {
        cin >> arr[i];
    }
    bubble(arr, 10);
    for (int j = 0; j <= 9; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}