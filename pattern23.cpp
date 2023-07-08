/*
   1
  121
 12321
1234321
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
                cout<<j-(n-i);
            }
            j++;
        }
        int k = i-1;
        while(k > 0){
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}