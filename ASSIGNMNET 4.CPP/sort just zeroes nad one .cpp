#include <iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    int x, count0=0, count1=0;
    for(int i=0;i<m;i++){
        cin>>x;
        if(x==0) count0++;
        else count1++;
    }

    for(int i=0;i<count0;i++) cout<<0<<" ";
    for(int i=0;i<count1;i++) cout<<1<<" ";
}


/*Sort just 0 and 1


Input Format
A line containing N number of 0s and 1s Next line follows a long sequence of 0 and 1 seperated by space


Constraints
N will not exceed 10^7


Output Format
Sorted Sequence


Sample Input
7
1 0 0 1 1 0 1
Sample Output
0 0 0 1 1 1 1
{...} Code Editor
*/