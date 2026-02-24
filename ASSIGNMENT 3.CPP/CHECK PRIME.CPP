#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    bool isPrime = true;

    if(n <= 1)
        isPrime = false;
    else {
        for(long long i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
/*Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".


Input Format

Constraints
2 < N <= 1000000000


Output Format

Sample Input
3
Sample Output
Prime
Explanation
The output is case specific

{...} Code Editor
*/