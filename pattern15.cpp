/*
D
C D
B C D
A B C D
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    char ch = 'A';
    int i = 1;

    while (i<=n){
        char c = ch + n - i; // 'A' + 4 - 1
        int j = 1;
        while(j<=i){
            cout<<c<<" ";
            c++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}