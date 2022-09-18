// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        ch='A';
        for(int j=1;j<=5;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}