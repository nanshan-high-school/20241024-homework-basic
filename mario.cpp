#include <iostream>
using namespace std;

// 嗨各位，Coding 時，請保持 Clean Code，保護眼晴的同時，也可以幫助自己 Debug 呦！
// 適時的使用註解，能夠幫助你更好的閱讀程式碼，一樣可以提升邏輯的縝密度。
// 解題思維：可觀察「輸入值」與「高度（行數）、每行輸出空白個數，以及井字號的個數」的個別關係

int main() {
    // Initial variable
    int height;
    cout << "height: ";
    cin >> height;

    // The line you have to print
    for (int i = 0; i < height; i++) {
        // The 'space' triangle you want to make
        for (int j = 0; j < height - i - 1; j++) {
            cout << ' ';
        }

        // And the 'hash sign' triangle you want to output
        for (int j = 0; j < i + 1; j++) {
            cout << '#';
        }

        // Don't forget it that you must do the newline
        cout << '\n';
    }
}
