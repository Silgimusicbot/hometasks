#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i,k,a,c;
    for (int i=1;1000>i;++i){
        k=i;
        c=0;
        while(k>0){
            a=k%10;
            c=c*10+a;
            k=k/10;
            }
        if (c==i){
            cout<<c<<endl;
        }
    }
}