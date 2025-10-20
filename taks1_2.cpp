#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "ədədləri yaz: ";
    cin >> a >> b;
    cout << "Cem: " << a + b << endl;
    cout << "Ferq: " << a - b << endl;
    cout << "Hasil: " << a * b << endl;
    if (b != 0)
        cout << "Bolme: " << (double)a / b << endl;
    else
        cout << "Bolme: 0 a bolmek olmaz" << endl;
}
