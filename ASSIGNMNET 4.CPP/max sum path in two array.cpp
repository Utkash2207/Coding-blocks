#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        int a[n], b[m];

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];

        int i=0,j=0,sum1=0,sum2=0,ans=0;

        while(i<n && j<m){
            if(a[i]<b[j]) sum1+=a[i++];
            else if(a[i]>b[j]) sum2+=b[j++];
            else{
                ans+=max(sum1,sum2)+a[i];
                sum1=sum2=0;
                i++; j++;
            }
        }

        while(i<n) sum1+=a[i++];
        while(j<m) sum2+=b[j++];

        ans+=max(sum1,sum2);
        cout<<ans<<endl;
    }
}


/*You are provided two sorted arrays. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.
link


Input Format
First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.


Constraints
1<=t<=100 1<=n,m, nums1[i], num2[i]<=100000


Output Format
Print the maximum path Sum.


Sample Input
2
8 8
2 3 7 10 12 15 30 34
1 5 7 8 10 15 16 19
5 4
2 4 5 8 10
4 6 8 9

Sample Output
122
30
Explanation
Test Case1 Explanation :- 122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34

{...} Code Editor
*/