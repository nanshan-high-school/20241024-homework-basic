#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "height:";
    cin >> height;

    // i: 現在是第i層
    for (int i = 1; i < height+1; i++) {
        
        // 輸出空白 (高度 - i)個
        for (int j = 0; j < height - i; j++) {
            cout << " ";
        }

        // 輸出"#" (i)個
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << "\n";
    }
}

/*
height:8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
*/