#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    void lwh (double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double v() {
        return length * width * height;
    }
};

int main() {
    Cuboid cuboids[3];

    for (int i = 0; i < 3; i++) {
        double l, w, h;
        cout << "输入长宽高" << i + 1 << ": " << endl;;
        cin >> l >> w >> h;
        cuboids[i].lwh(l, w, h);
    }

    cout << "体积为" << endl;
    for (int i = 0; i < 3; i++) {
        double volume = cuboids[i].v();
        cout << "柱体" << i + 1 << ": " << volume << endl;
    }

    return 0;
}