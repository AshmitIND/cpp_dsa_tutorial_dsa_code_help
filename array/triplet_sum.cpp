//find the three elements of the that add to form the key
//remember it is an unsorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int size,i,key;
    cin>>size;
    for (i = 0; i <size; i++)
        cin>>arr[i];
    cout<<"enter the key"<<endl;
    cin>>key;
    int j,k,ele,l;
    for ( j= 0; j < size; j++){
        for(k=j+1;k<size;k++){
            for(l=k+1;l<size;l++){
                if(arr[j]+arr[k]+arr[l]==key){
                    cout<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<key<<endl;
                    break;
                }
            }
        }
    }  
}