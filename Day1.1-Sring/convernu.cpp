#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int n;
    cout<<"enter nu : ";
    cin>>n;

    string str = to_string(n);
    cout<<"converted string "<<str<<endl;
   

    cout << "Type of n: " << typeid(n).name() << endl;  // prints type info
    cout << "Type of str: " << typeid(str).name() << endl;
}