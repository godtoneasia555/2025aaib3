/// weeek04-1.cpp
/// 複習 vector<int >a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout << "沒有初始化a的長度" << a.size() << endl;
    a.push_back(99); ///下面還有很多
    cout << "經過push_back " << a.size() << endl;
    vector<int> b(3); ///伸縮自如的陣列 長度3
    cout << "a的長度是" << b.size() << endl;
    a.push_back(99); ///下面還有很多
    for(int i=0; i<b.size(); i++) cout << b[i]<<' ';
    cout << "經過push_back " << a.size() << endl;
    vector<int> c(3,00); ///伸縮自如的陣列 長度3
    for(int i=0; i<c.size(); i++) cout <<c[i] <<' ';
    cout <<"初始化(3,88) 就會試3個88" << endl;








}

