#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 12 || n == 1 || n == 2)
        cout << "Qis" << endl;
    else if (n >= 3 && n <= 5)
        cout << "Yaz" << endl;
    else if (n >= 6 && n <= 8)
        cout << "Yay" << endl;
    else if (n >= 9 && n <= 11)
        cout << "Payiz" << endl;
}
