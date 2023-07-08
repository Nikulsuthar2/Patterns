/*
A
B B
C C C
D D D D
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    char ch = 64;
    int i = 1;

    while (i<=n){
        char c = ch + i;
        int j = 1;
        while(j<=i){
            cout<<c<<" ";
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}