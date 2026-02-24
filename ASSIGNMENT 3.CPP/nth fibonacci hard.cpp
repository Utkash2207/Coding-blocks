#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }
    if(n == 1) {
        cout << 1;
        return 0;
    }

    long long a = 0, b = 1, c;

    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}

/*Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.


Input Format

Constraints
0 <= N <= 1000


Output Format

Sample Input
10
Sample Output
55
Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.

{...} Code Editor


