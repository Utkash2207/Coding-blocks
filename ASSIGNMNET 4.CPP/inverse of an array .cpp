#include <iostream>
using namespace std;

void invert(int v[], int w[], int y, int i){
    if(i==y) return;
    w[v[i]] = i;
    invert(v,w,y,i+1);
}

int main(){
    int y;
    cin>>y;
    int v[1000], w[1000];
    for(int i=0;i<y;i++) cin>>v[i];
    invert(v,w,y,0);
    for(int i=0;i<y;i++) cout<<w[i]<<" ";
    return 0;
}



/*Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array


Input Format
Enter a number N and take N more inputs


Constraints
None


Output Format
Display the values of the inverted array in a space separated manner


Sample Input
5
0 2 4 1 3
Sample Output
0 3 1 4 2
Explanation
Swap element with index

for eg : element 4 at index 2 becomes element 2 at index 4

{...} Code Editor
*/