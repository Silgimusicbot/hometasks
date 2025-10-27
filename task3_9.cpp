#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool s = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            s = false;
            break;
        }
    }
    if (n < 2) s = false;
    if (s == true)
        cout << "Sadədi";
    else
        cout << "Sadə deyil";
}
