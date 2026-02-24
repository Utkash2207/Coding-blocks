#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 5;
        return 0;
    }

    long long result = 0, place = 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 0)
            digit = 5;

        result = result + digit * place;
        place *= 10;
        n /= 10;
    }

    cout << result;
    return 0;
}
/*Given a integer as a input and replace all the '0' with '5' in the integer


Input Format
Enter an integer n


Constraints
0<=n<=1000000000000


Output Format
All zeroes are replaced with 5


Sample Input
102
Sample Output
152
Explanation
Check each digit , if it is nonzero, then no change required but if it is zero then replace it by 5.

{...} Code Editor
*/