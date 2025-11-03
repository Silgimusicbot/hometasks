#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i,k;
    string s="";
    cout<<"Ədədi daxil edin :";
    cin>>i;
    while (i>0){
        k=i%2;
        i=i/2;
        s=to_string(k)+s;
    } 
    cout<<s;
}