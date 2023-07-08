/*
1234
 234
  34
   4
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
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<j;
            }
            
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}