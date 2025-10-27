#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    while (true) {
        cin >> n;
        if (n == 0) break;
        s += n;
    }
    cout << s;
}
