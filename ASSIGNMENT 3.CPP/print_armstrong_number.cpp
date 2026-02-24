#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        int digits = countDigits(i);
        int temp = i;
        int sum = 0;

        while (temp > 0) {
            int d = temp % 10;
            sum += power(d, digits);
            temp /= 10;
        }

        if (sum == i)
            cout << i << endl;
    }

    return 0;
}
/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3


Input Format

Constraints
0 < N1 < 100 N1 < N2 < 10000


Output Format

Sample Input
400
1000
Sample Output
407
Explanation
Each number in output is in separate line.

{...} Code Editor
*/
