#include <iostream>
using namespace std;

long long binaryToDecimal(long long n) {
    long long ans = 0;
    long long power = 1;

    while(n > 0) {
        int digit = n % 10;
        ans += digit * power;
        power = power * 2;
        n = n / 10;
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;

    cout << binaryToDecimal(n);

    return 0;
}

/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.


Input Format

Constraints
0 < N <= 1000000000


Output Format

Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

{...} Code Editor
*/