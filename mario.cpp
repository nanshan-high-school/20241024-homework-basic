#include <iostream>
using namespace std;

// �٦U��ACoding �ɡA�ЫO�� Clean Code�A�O�@�������P�ɡA�]�i�H���U�ۤv Debug ��I
// �A�ɪ��ϥε��ѡA������U�A��n���\Ū�{���X�A�@�˥i�H�����޿誺���K�סC
// ���D����G�i�[��u��J�ȡv�P�u���ס]��ơ^�B�C���X�ťխӼơA�H�Τ��r�����Ӽơv���ӧO���Y

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
