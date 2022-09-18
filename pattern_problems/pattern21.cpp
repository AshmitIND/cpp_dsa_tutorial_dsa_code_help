
        //                 1
        //         2       3
        // 4       5       6
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=1;
    for(int i=1;i<5;i++){
        for(int j=5-i;j>=1;j--){
            cout<<"\t";
        }
        for(int k=1;k<i;k++){
            cout<<x<<"\t";
            x++;
        }
        cout<<"\n";
    }
}