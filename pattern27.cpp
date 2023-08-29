/*

*
*1*
*2*3*
*4*5*6*
*7*8*9*10*

*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=1; j<=2*i+1; j++){
            if(j%2 == 0){
                cout<<count;
                count++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}