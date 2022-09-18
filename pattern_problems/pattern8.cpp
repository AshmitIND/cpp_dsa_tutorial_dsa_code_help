// 1
// 2       3
// 4       5       6
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<"\t";
            x++;
        }
        cout<<"\n";
    }
}