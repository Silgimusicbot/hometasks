#include <iostream>
using namespace std;
int main(){
    int i=100;
    for (i=100;999>=i;++i){
        int k=i,a=0,c=0;
        while(k>0){
            a=k%10;
            k=k/10;
            c=c+a;
        }
        if (c==10){
            cout<<i<<endl;
        }
    }
}