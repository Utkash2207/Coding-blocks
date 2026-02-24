#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int original = n;
    int sumNumber = digitSum(n);
    int sumFactors = 0;
    bool isComposite = false;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sumFactors += digitSum(i);
            n /= i;
            isComposite = true;
        }
    }

    if (n > 1) {
        sumFactors += digitSum(n);
        if (n != original) isComposite = true;
    }

    if (isComposite && sumNumber == sumFactors)
        cout << 1;
    else
        cout << 0;

    return 0;
}
