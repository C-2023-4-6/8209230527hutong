#include <iostream>
using namespace std;

int main() {
    bool lockers[100] = { false }; // 初始化所有储物柜都是关闭的
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j <= 100; j += i) {
            lockers[j - 1] = !lockers[j - 1]; // 改变储物柜的状态
        }
    }
    cout << "开着的储物柜编号为：";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << i + 1 << " "; // 输出开着的储物柜编号
        }
    }
    return 0;
}
