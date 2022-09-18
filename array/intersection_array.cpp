//find the intersection elements of two arrays
//if not present then print -1
//in this casew the array is in sorted in increasing order
//but not all the time it will be like that
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ele,count=0;
    int a[6]={1,2,3,4,5,6};//int a[6]={1,2,3,4,5,6};
    int b[4]={4,6,7,8};//int b[4]={9,7,8,10};
        for(int i=0;i<6;i++){
            ele=a[i];
            for(int j=0;j<4;j++){
                if(ele==b[j]){
                    cout<<a[i]<<"\t";
                    count++;
                }
            }
        }
        if(count==0)
            cout<<"-1"<<endl;
}
//optimized solution
//in this case the array is in sorted in increasing order
//but not all the time it will be like that
void optimized(){
    int /*ele, */count=0;
    int a[6]={1,2,3,4,5,6};//int a[6]={1,2,3,4,5,6};
    int b[4]={4,6,7,8};//int b[4]={9,7,8,10};
    // for(int i=0;i<6;i++){
    //         ele=a[i];
    //         if(a[i]<b[i])
    //             continue;
    //         else{
    //             for(int j=0;j<4;j++){
    //                 if(ele==b[j]){
    //                     cout<<a[i]<<"\t";
    //                     count++;
    //                 }
    //             }
    //         }
    //     }
    int i=0,j=0;
    while(i<6&&j<4){
        if(a[i]==b[j]){
            cout<<a[i];
            count++;
            i++;
            j++;

        }
        else if(a[i]<b[i])
            i++;
        else
            j++;
    }
    if(count==0)
        cout<<"-1"<<endl;

}