//                                 1
//                         2       2
//                 3       3       3
//         4       4       4       4
// 5       5       5       5       5
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>=1;j--){
            cout<<"\t";
        }
        for(int k=1;k<=i;k++){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
}