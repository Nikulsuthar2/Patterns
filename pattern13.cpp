/*
A
B C
D E F
G H I J
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
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}