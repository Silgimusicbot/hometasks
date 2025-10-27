#include <iostream>
using namespace std;

int main() {
    int N, n, s = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> n;
        s += n;
    }
    cout << s;
}
