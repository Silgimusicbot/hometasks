#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;
    if (n > 0)
        cout << "Musbet" << endl;
    else if (n < 0)
        cout << "Menfi" << endl;
    else
        cout << "Sifir" << endl;
}
