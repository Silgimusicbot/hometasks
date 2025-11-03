#include <iostream>
using namespace std;
int main() {
    int i,c=0;
    cout<<"Ədədi daxil edin :";
    cin>>i;
    for (int a=1;i>a;++a){
        if(i%a==0){
            c=c+a;
        }
    }
    if (c==i){
        cout<<"Mükəmməl ədəddir";
    }
    else{
        cout<<"Mükəmməl ədəd deyil";
    }
}