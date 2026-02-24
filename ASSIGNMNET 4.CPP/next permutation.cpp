#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    int a[100000];
    for(int i=0;i<n;i++) cin>>a[i];

    next_permutation(a,a+n);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}


/*You are given an array of integers that represents a permutation of numbers. Your task is to find the next lexicographical permutation of the array. If such a permutation does not exist (i.e., the array is sorted in descending order), rearrange the array to its smallest permutation (sorted in ascending order).


Input Format
A single integer n representing the size of the array.
An array of n integers, nums, representing the permutation.

Constraints
1 ≤ n ≤ 105
1 ≤ nums[i] ≤ 105
All elements in the array are not necessarily distinct.

Output Format
Output the array after transforming it into its next lexicographical permutation. If no such permutation exists, output the array sorted in ascending order.


Sample Input
3
1 2 3
Sample Output
1 3 2
Explanation
The next permutation of [1, 2, 3] in lexicographical order is [1, 3, 2].

{...} Code Editor
*/