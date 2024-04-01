#include <iostream>
using namespace std;

int checkPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void alternatePrime(int N) {
    int count = 0;
    int num = 2;
    while (count < N * 2) {
        if (checkPrime(num)) {
            if (count % 2 == 0) {
                cout << num << " ";
            }
            count++;
        }
        num++;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "First " << N << " prime numbers skipping every alternate prime number:" << endl;
    alternatePrime(N);
    return 0;
}

