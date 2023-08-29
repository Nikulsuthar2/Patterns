/*

   *
  * *
 * * *
* * * *
 * * * 
  * *
   *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int k=n-i; k>0; k--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int k=0; k<n-i; k++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}