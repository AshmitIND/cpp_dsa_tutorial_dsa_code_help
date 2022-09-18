#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int size,x;
    cin>>size;
    for (x = 0; x <size; x++)
        cin>>arr[x];
    int i=0,j=size;
    while(i>=j){
        if(arr[i]==0)
            i++;
        if(arr[j]==1)
            j--;
        else if(arr[i]==1&&arr[j]==0)
            swap(arr[i], arr[j]);
    }
    for (x = 0;x<=size;x++)
        cout<<arr[x]<<" ";
}