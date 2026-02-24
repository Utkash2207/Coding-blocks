#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[1000];
        for(int i=0;i<n;i++) cin>>a[i];

        int total=0, maxSum=a[0], cur=a[0];
        for(int i=0;i<n;i++) total+=a[i];
        for(int i=1;i<n;i++){
            cur = max(a[i], cur+a[i]);
            maxSum = max(maxSum, cur);
        }

        int minSum=a[0]; cur=a[0];
        for(int i=1;i<n;i++){
            cur = min(a[i], cur+a[i]);
            minSum = min(minSum, cur);
        }

        if(total==minSum) cout<<maxSum<<endl;
        else cout<<max(maxSum, total-minSum)<<endl;
    }
}


/*Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].


Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.


Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000


Output Format
Print the maximum circular sum for each testcase in a new line.


Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22
Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)

{...} Code Editor
*/