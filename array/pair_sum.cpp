//find the elements of the that add to form the key
//remember it is an unsorted array
//when returning the elements, sort them in the increasing order
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
    int j,k,ele;
    for ( j= 0; j < size; j++){
        ele=arr[j];
        for(k=j+1;k<size;k++){
            if((ele+arr[k])==key){
                if(ele<arr[k])
                    cout<<ele<<" + "<<arr[k]<<" "<<key<<endl;
                else    
                    cout<<arr[k]<<" + "<<ele<<" "<<key<<endl;
                break;
            }
        }
    }  
}