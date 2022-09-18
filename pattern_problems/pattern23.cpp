// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    for(int i=1;i<=5;i++){
        x=1;
        for(int j=6-i;j>=1;j--){
            cout<<x<<" ";
            x++;
        }
        for(int k=1;k<=i-1;k++){
            cout<<"* ";
        }
        for(int l=1;l<=i-1;l++){
            cout<<"* ";
        }
        y=6-i;
        for(int m=6-i;m>=1;m--){
            cout<<y<<" ";
            y--;
        }
        cout<<"\n";
    }
}