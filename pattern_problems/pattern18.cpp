// 1       1       1       1
//         2       2       2
//                 3       3
//                         4
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<i;j++){
            cout<<"\t";
        }
        for(int k=5-i;k>=1;k--){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
}