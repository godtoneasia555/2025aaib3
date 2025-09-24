/// week03-1.cpp
/// c++陣列 vector<int>
#include <iostream> /// cin cout 藥用的
#include <vector> ///今天的主題 陣列 vector
using namespace std;
int main()
{
    cout << "請輸入4個數字";
    vector<int> a;
     int now;
     for(int i=0; i<4.; i++){
        cin >> now;
        a.push_back(now);
    }

    for(int i=0; i<a.size(); i++){
    cout << a[i] << ' ';///數字後面,有空格
    }
     cout << "現在程式碼李 又推入了99 98兩個數字,結果呢?";

    a.push_back(99);///推到a的後面
    a.push_back(88);///推到a的後面

    for(int i=0; i<a.size(); i++){
    cout << a[i] << ' ';


    }
}


