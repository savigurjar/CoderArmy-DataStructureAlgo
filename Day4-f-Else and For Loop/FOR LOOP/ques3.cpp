//  3. Print all numbers from 1 to n, which is divisible by 4. Take n as
//  an input from the user

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }
}