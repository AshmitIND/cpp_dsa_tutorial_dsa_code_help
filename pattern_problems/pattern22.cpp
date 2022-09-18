//      1
//     121
//    12321
//   1234321
//  123454321
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=6-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<"";
        }
        for(int l=i-1;l>=1;l--){
            cout<<l<<"";
        }
        cout<<"\n";
    }
}