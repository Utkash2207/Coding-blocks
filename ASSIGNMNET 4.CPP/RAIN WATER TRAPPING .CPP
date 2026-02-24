#include <iostream>
using namespace std;

int main(){
    int v; cin>>v;
    while(v--){
        int n; cin>>n;
        int b[1000000];
        for(int i=0;i<n;i++) cin>>b[i];

        int l=0,r=n-1;
        int LMax=0,RMax=0;
        long long water=0;

        while(l<=r){
            if(b[l] <= b[r]){
                if(b[l] >= LMax) LMax=b[l];  // HERE L = LEFT AND R = RIGHT 
                else water += LMax-b[l];
                l++;
            }
            else{
                if(b[r] >= RMax) RMax=b[r];
                else water += RMax-b[r];
                r--;
            }
        }
        cout<<water<<endl;
    }
    return 0;
}



/*You are given an input array whose each element represents the height of a line towers. The width of every tower is 1. It starts raining. Water is filled between the gap of towers if possible. You need to find how much water filled between these given towers.

Example : Imgur


Input Format
The first line consists of number of test cases T. Each test case consists an integer N as number of towers and next line contains the N space separated integers.


Constraints
1 <= N <= 1000000 1 <= t <= 10 0 <= A[i] <= 10000000


Output Format
Print how much unit of water collected among towers for each test case.


Sample Input
2
6
3  0  0  2  0  4
12
0  1  0  2  1  0  1  3  2  1  2  1
Sample Output
10
6
{...} Code Editor
*/