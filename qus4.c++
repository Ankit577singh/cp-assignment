#include <iostream>
using namespace std;

int power(int a, int b, int m) {
    if (b == 0) return 1;
    return (a % m * power(a, b - 1, m)) % m;
}

int main() {
    int a, b, m;
    cout << "Enter the value for a, b, and m: ";
    cin >> a >> b >> m;
    int c = power(a, b, m);
    cout << c;
    return 0;
}
