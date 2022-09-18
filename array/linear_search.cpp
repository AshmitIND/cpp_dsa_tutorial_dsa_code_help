#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,count=0;
    int arr[100000];
    cout<<"enter the key\n";
    cin>>n;
    cout<<"enter the elements\n";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        if(arr[i]==n)
            count++;
    }
    if(count!=0)
    cout<<"the key is found "<<count<<" times\n";
    else
        cout<<"the key is absent\n";
}