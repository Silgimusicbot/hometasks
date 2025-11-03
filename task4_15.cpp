#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i=1,max=0;
    while (i>0){
        int a;
        cout<<"Ədədləri daxil edin :";
        cin>>a;
        if (a!=0){
            if (a>max){
                max=a;
                }
            }
        else {
            cout<<max;
            break;
            }
        }
    }