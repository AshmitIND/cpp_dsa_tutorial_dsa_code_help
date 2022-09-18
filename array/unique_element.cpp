//the occurence of each element has to be different 
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[100], unique[100];
    int size,count=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i]; 
    }
    for (int j = 0; j <size; j++){
        count=count^arr[j];
    }
    for (int k = 1; k <size; k++){
        count=count^k;
    }
    cout<<count;
    
}