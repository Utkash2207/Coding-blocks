#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    long long b[1000], l[1000], r[1000];//here l = left

    for(int i=0;i<n;i++) cin>>b[i];//here r = right

    l[0]=1;
    for(int i=1;i<n;i++)
        l[i]=l[i-1]*b[i-1];

    r[n-1]=1;
    for(int i=n-2;i>=0;i--)
        r[i]=r[i+1]*b[i+1];

    for(int i=0;i<n;i++)
        cout<<l[i]*r[i]<<" ";

    return 0;
}

/*Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].

Challenge : do this without division in linear time


Input Format
First line contains integer N as size of array.
Next line contains a N integer as element of array. The product of any prefix or suffix of arr is NOT guaranteed to fit in a 32-bit integer.


Constraints
-10000000 < arr[i]<=10000000


Output Format
Print output array


Sample Input
4
1 2 3 4
Sample Output
24 12 8 6 
{...} Code Editor
*/