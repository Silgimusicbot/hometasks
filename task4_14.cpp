#include <iostream>
using namespace std;
int main() {
    int k,a,m,c=0;
    cout<<"Ədədi daxil edin :";
    cin>>k;
    m=k;
    while(k>0){
        a=k%10;
        c=c*10+a;
        k=k/10;
        }
    if (c==m){
        cout<<"Bərabərdir";
    }
    else{
        cout<<"Bərabər deyil"
    }
}