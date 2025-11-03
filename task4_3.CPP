#include <iostream>
using namespace std;
int main(){
    int N,j=2,i=2;
    cout<<"N ədədini daxil edin :";
    cin>>N;
    for (i=2;N>=i;++i){
        int c=0;
        for (j=2;i>j;++j){
            if (i%j==0){
                c=1;
                break;
                }
        }
        if (c==0){
            cout<<i<<endl;
            }
        }
    }