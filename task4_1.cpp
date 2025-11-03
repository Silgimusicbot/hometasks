#include <iostream>
using namespace std;
int main() {
    int i,a=1,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    for (a;i>a;++a){
        if (a%2==0){
            c=c+a*a;
        }
    }
    cout<<c;
}