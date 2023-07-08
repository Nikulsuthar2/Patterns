/*
A A A A
B B B B
C C C C 
D D D D
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    char ch = 65;
    int i = 1;

    while (i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch<<" ";
            j++;
        }
        ch += 1;
        cout<<endl;
        i++;
    }
    return 0;
}