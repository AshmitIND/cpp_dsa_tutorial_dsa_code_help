// input--> 1
// 2 
// 3
// output--> 123
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0, rev=0;
    cout<<"enter the no. of values \n";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<"enter the value...\n";
        cin>>x;
        ans=ans+(x*((int)pow(10, i)));
    }
    while(ans!=0){
        int d=ans%10;
        rev=rev*10+d;
        ans=ans/10;
    }
    cout<<"the required number is... "<<ans;
    
}