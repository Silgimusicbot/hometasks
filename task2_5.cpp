#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 0 && n <= 50)
        cout << "F" << endl;
    else if (n <= 60)
        cout << "E" << endl;
    else if (n <= 70)
        cout << "D" << endl;
    else if (n <= 80)
        cout << "C" << endl;
    else if (n <= 90)
        cout << "B" << endl;
    else (n <= 100)
        cout << "A" << endl;
}
