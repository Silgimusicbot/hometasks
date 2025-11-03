#include <iostream>
using namespace std;
int main() {
    int i=1,s=1,cc=0,tc=0;
    while(i>0){
        if (s%2==0){
            cc=cc+i;
            i=i+1;
            s=s+1;
            }
        else {
            tc=tc+i;
            i=i+1;
            s=s+1;
        }
        if (s==1){
            s=s+1;
        }
    }
    cout<<"Cüt cəm "<<cc<<endl;
    cout<<"Tək cəm "<<tc;
}