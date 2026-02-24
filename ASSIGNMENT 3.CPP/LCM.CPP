#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while(b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long n1, n2;
    cin >> n1 >> n2;

    cout << lcm(n1, n2);

    return 0;
}
/*Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.


Input Format

Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000


Output Format

Sample Input
4 
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

{...} Code Editor
*/