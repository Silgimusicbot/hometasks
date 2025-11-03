#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (int i=1;1000>i;++i){
        int s=0,c=0,k;
        k=i;
        while(k>0){
            s=s+1;
            k=k/10;
        }
        k=i;
        while(k>0){
            c=c+pow((k%10),s);
            k=k/10;
        }
        if(c==i){
            cout<<i<<endl;
        }
    }
}