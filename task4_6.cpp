#include <iostream>
using namespace std;
int main(){
    int N,a,max=0,min,c=0,əo;
    cout<<"Ədədlərin sayın daxil edin :";
    cin>>N;
    cout<<"Birinci Ədədi daxil edin :";
    cin>>a;
    c=c+a;
    min=a;
    for(int i=1;N>i;++i){
        int a;
        cout<<"Ədədləri daxil edin :";
        cin>>a;
        c=c+a;
        if (max<a){
            max=a;
        }
        if (min>a){
            min=a;
        }
    }
    əo=c/N;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<əo;
}