#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int size;

int main(){
    cin>>size;
    int i;
    for (i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i=i+2){
        if(i+1<size)
        swap(arr[i], arr[i+1]);
        
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
