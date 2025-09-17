/// week 02-2.cpp c
/// 要用 c++ 的字串 反過來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    count <<"請輸入數字; ";
    string a, ans;
    cin >> a;
    for(int i=a.legth()-1; i>=0; i--){
        ans += a[i];
    }
    cout << a << ans;
}
