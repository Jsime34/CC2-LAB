#include <iostream>
using namespace std;


int main(){
    int n=12;
    int a=1;
    int b=1;
    cout << "0" << " ";
    cout << "1" << " ";

    for(int i=0; i<n; i++){
        cout << b << " ";
        b=a+b;
        a=b-a;
    }
}