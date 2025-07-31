//  2. Print all Odd numbers from 1 to n, take n as an input from the
//  user

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    for(int i=1;i<=n;i=i+2){
        cout<<i<<" ";
    }
    return 0;
}