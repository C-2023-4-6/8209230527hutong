#include <iostream>
using namespace std;

int main() {
    bool lockers[100] = { false }; // ��ʼ�����д�����ǹرյ�
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j <= 100; j += i) {
            lockers[j - 1] = !lockers[j - 1]; // �ı䴢����״̬
        }
    }
    cout << "���ŵĴ������Ϊ��";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << i + 1 << " "; // ������ŵĴ������
        }
    }
    return 0;
}
