#include <iostream>
using namespace std;
int main() {
    int times;
    cin >> times;
    for (int i = times; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            cout << " ";
        }
        for (int k = i; k <= times; k++) {
            cout << "#";
        }

        cout << " ";

        for (int l = i; l <= times; l++) {
            cout << "#";
        }

        cout << "\n";
    }
}
