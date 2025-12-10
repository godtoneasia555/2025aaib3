/// week14-5.cpp
/// UVA 10079 Pizza Cutting 題目
#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N < 0) break; // If N is negative, break out of the loop
        int ans = 1 + (N * (N + 1)) / 2; // Calculate the number of pieces
        cout << ans << "\n"; // Output the result
    }
}
/// 最後測試 N = 5 會跑出 16
/// 輸入 10 會跑出 56
/// 輸入 -100 會直接結束 break
