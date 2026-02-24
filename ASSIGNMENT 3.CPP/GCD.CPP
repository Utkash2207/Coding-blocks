#include <iostream>
using namespace std;

int main() {
    long long n1, n2;
    cin >> n1;
    cin >> n2;

    long long gcd;

    for(long long i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    cout << gcd;

    return 0;
}
/*#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while(b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    long long n1, n2;
    cin >> n1 >> n2;

    cout << gcd(n1, n2);

    return 0;
}
*/