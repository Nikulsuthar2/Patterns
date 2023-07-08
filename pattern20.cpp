/*
   1
  22
 333
4444
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n){
        int j = 1;
        while(j<=n){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<i;
            }
            
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}