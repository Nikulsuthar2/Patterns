/*

  * * * * *
   * * * *
    * * * 
     * * 
      * 
      *
     * * 
    * * *
   * * * * 
  * * * * *

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j<=n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=i; j>=0; j--){
            cout<<" ";
        }
        for(int j=n-i; j>=0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}