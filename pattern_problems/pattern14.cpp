// E 
// D E
// C D E
// B C D E
// A B C D E
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        ch='A'+5-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}