#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int size,i,key;
    cin>>size;
    for ( i = 0; i < size; i++)
        cin>>arr[i];
    cout<<"enter the key"<<endl;
    cin>>key;
    int s=0,e=size-1,mid=s+((e-s)/2),count=0;
    while(s<=e){
        if(arr[mid]==key)
            count++;
        else{
            if(arr[mid]<key)
                s=mid+1;
            else
                e=mid;
        }
        mid=s+((e-s)/2);
    }
    cout<<count<<endl;
}