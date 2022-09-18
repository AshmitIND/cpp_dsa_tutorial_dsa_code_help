//print the given number's binary form
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the number...\n";
    int n;
    cin>>n;
    int x=0;
    int ans[32];
    while(n!=0){
        ans[x]=n%2;
        x++;
        n=n/2;
    }
    for (int i =x-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    
}