#include<iostream>
using namespace std;

int main(){
    int n;
    int e = 0;
    int o = 0;
    while(n != 0){
        cout << "Enter an integer: ";
        cin >> n;
        if(n%2 == 0 and n !=0) {
            e=e+1;
        }
        if(n%2 !=0) {
            o=o+1;
        }
    }
    cout << "#Even numbers = " <<e<<"\n"; 
    cout << "#Odd numbers = " <<o;
    return 0;
}
