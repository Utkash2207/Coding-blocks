#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b[50000];

    for(int i=0;i<n;i++) 
	cin>>b[i];

    int count=0, ans=0;

    for(int i=0;i<n;i++){
        if(count==0) ans=b[i];
        if(b[i]==ans) count++;
        else count--;
    }

    cout<<ans;
    return 0;
}

/*Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

You may assume that the array is non-empty and the majority element always exist in the array.


Input Format
First line contains integer N (size of the array) followed by N more integers.


Constraints
1 <= n <= 5 * 104


Output Format
Majority Element of array


Sample Input
3
1 1 2
Sample Output
1
Explanation
Number of 1's in the array is more than 3/2 , Hence majority element is 1

{...} Code Editor
*/