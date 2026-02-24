#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int toDecimal(int sn, int sb) {
    int decimal = 0;
    int position = 0;

    while (sn > 0) {
        int digit = sn % 10;
        decimal += digit * power(sb, position);
        sn /= 10;
        position++;
    }

    return decimal;
}

int fromDecimal(int decimal, int db) {
    int result = 0;
    int place = 1;

    while (decimal > 0) {
        int rem = decimal % db;
        result += rem * place;
        place *= 10;
        decimal /= db;
    }

    return result;
}

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;

    int decimal = toDecimal(sn, sb);
    int ans = fromDecimal(decimal, db);

    cout << ans;
    return 0;
}

/*Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.
Input Format

Constraints
0 < N <= 1000000000
sb and db <= 10

Output Format

Sample Input
8
2 
33
Sample Output
11011
Explanation
All input output is as integers and in separate lines.
*/