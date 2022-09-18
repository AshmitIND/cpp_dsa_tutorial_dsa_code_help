//find the pivot in an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int size,i;
    cin>>size;
    for ( i = 0; i < size; i++)
        cin>>arr[i];
    int start=0,end=size-1,mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]>=arr[start])
            start=mid+1;
        else
            end=mid;
        mid=start+((end-start)/2);
    }
    cout<<"pivot is "<<arr[start]<<endl;
}
