#include <iostream>
using namespace std;
int main() {
    int c=0,a=1,b=0;
    while (c<1000){
        c=a+b;
        a=b;
        b=c;
        if (c<1000){
            cout<<c<<endl;
            }
        }
    }