//print the no. of one bit present in an unsigned integer
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the number\n";
    int n, count=0;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}
