#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i,b,c;
    string a;
    cout<<"Ediləcək əməliyyatı daxil edin ;" ;
    cin>>a;
    cout<<"Əməliyyat sayını daxil edin :";
    cin>>i;
    cout<<"Birinci ədədi daxil edin:";
    cin>>b;
    c=b;
    for (i;i>1;--i){
        cout<<"Ədədləri daxil edin :";
        cin>>b;
        if (a=="+"){
            c=c+b;
            cout<<c;
            }
        else if (a=="-"){
            c=c-b;
            cout<<c;
            }
        else if (a=="*"){
            c=c*b;
            cout<<c;
            }
        else{
            c=c/b;
            cout<<c;
            }
        }   
    }