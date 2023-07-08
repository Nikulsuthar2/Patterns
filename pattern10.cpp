/*
A B C D
E F G H
I J K L 
M N O P
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
            ch++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}