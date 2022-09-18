//binary search works only on monotonous functions
//the elements should be sorted
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
    int f=0,l=size-1,mid=f+((l-f)/2);
    while(f<=l){
        if(arr[mid]==key){
            cout<<mid<<endl;
            break;
        }
        else{
            if(arr[mid]<key)
                f=mid+1;
            else
                l=mid-1;
        }
        //mid=(f+l)/2;
        mid=f+((l-f)/2);
    }
}