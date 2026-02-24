#include <iostream>
using namespace std;

int main(){
    int m; 
    cin>>m;
    int b[1000];

    for(int i=0;i<m;i++) cin>>b[i];

    for(int i=1;i<m;i++){
        int key=b[i], j=i-1;
        while(j>=0 && b[j]>key){
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=key;
    }

    for(int i=0;i<m;i++) cout<<b[i]<<" ";
	return 0;
}



/*Given an array A of size N , write a function that implements insertion sort on the array. Print the elements of sorted array.


Input Format
First line contains a single integer N denoting the size of the array. Next line contains N space seperated integers where ith integer is the ith element of the array.


Constraints
1 <= N <= 1000
|Ai| <= 1000000


Output Format
Output N space seperated integers of the sorted array in a single line.


Sample Input
4
3 4 2 1
Sample Output
1 2 3 4
Explanation
For each test case, write insertion sort to sort the array.

{...} Code Editor
*/