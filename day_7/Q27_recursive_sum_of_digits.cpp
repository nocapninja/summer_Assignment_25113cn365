#include <iostream>
using namespace std;
int sumOfDigits(int x) {
    if (x == 0)
        return 0;
    return x % 10 + sumOfDigits(x / 10);
}
int main() {
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << "Sum of digits is " << sumOfDigits(n);
    return 0;
}