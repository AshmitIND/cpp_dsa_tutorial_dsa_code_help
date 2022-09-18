// int this array every element is appearing twice except a element(the element 
// is appearing only once)
// fing that element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int size,k,temp=0;
    cin>>size;
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(k=0;k<size;k++)
        temp=temp^arr[k];//using xor operator
    cout<<temp;
}