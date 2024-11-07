#include <iostream>
using namespace std;
int main() {
    for (int hr = 0 ; hr <= 23 ; hr++) {
        for (int m = 0 ; m < 60 ; m++) {
            for (int sec = 0 ; sec < 60 ; sec++) {
                if (hr < 10) {
                    cout << "0" << hr << ":";
                }
                else {
                    cout << hr << ":";
                }
                if (m < 10) {
                    cout << "0" << m << ":";
                }
                else {
                    cout << m << ":";
                }
                if (sec < 10) {
                    cout << "0" << sec << "\n";
                }
                else {
                    cout << sec << "\n";
                }
            }
        }
    }
}

