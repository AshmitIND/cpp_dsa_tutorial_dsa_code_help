// 1       2       3       4
//         2       3       4
//                 3       4
//                         4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    for(int i=2;i<=6;i++){
        for(int j=2;j<=i-1;j++){
            cout<<"\t";
        }
        x=i-1;
        for(int k=7-i;k>=2;k--){
            cout<<x<<"\t";
            x++;   
        }
        cout<<"\n";
    }
}