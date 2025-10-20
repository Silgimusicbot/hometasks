#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    cout << m << endl;
}
