/// week07-1.cpp
/// TQC+ KYC01 阿寶哥男友請大寶哥幫忙，印出字母6題
/// Input: 1-9 的整數區間  Output: 結構圖側的小方塊
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  /// Step01: Input

    for (int i=1; i<=2*n-1; i++) {  /// Step03: 處理層數, 反轉層
        for (int j=1; j<=2*n-1; j++)  /// 夾變數
            cout << n;

        cout << " 現在正在處理 i = " << i;  /// Step04: 處理層數
        cout << endl; /// Step02: Output, 結束
    }
}
