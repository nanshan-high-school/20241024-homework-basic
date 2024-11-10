#include <iostream>
using namespace std;
int main() {
  cout << "Change Owed:";
  int change, coin25, coin10, coin5, coin1;
  int coin25_number, coin10_number, coin5_number, coin1_number;
  int coin25_remain, coin10_remain, coin5_remain, coin1_remain, total;

  cin >> change;
  coin25 = change - change%25;
  coin25_number = coin25 / 25;
  coin25_remain = change - coin25;

  coin10 = coin25_remain - coin25_remain%10;
  coin10_number = coin10 / 10;
  coin10_remain = coin25_remain - coin10;

  coin5 = coin10_remain - coin10_remain%5;
  coin5_number = coin5 / 5;
  coin5_remain = coin10_remain - coin5;

  coin1 = coin5_remain - coin5_remain%1;
  coin1_number = coin1 / 1;
  coin1_remain = coin5_remain - coin1;

  total = coin25_number + coin10_number + coin5_number + coin1_number;
  cout << total;
}
