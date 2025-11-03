#include <iostream>
using namespace std;
int main(){
    int i,j=1,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    for (j=1;i>=j;++j){
        if (i%j==0){
            c=c+1;
        }
    }
    cout<<c;
}