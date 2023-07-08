/*
A B C D
A B C D
A B C D
A B C D
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
        int j = 1;
        while(j<=n){
            char c = ch + j;
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}