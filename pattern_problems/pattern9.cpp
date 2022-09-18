// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }
}