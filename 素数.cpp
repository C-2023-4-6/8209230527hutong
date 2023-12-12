#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    vector<int> primes;
    int count = 0;
    for (int i = 2; primes.size() < 200; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
            count++;
        }
    }

    for (int i = 0; i < primes.size(); i++) {
        if (i % 10 == 0)
            cout << endl;
        cout << primes[i] << " ";
    }

    cout << endl;
    cout << "一共找到了" << count << "个素数。" <<endl;

    return 0;
}