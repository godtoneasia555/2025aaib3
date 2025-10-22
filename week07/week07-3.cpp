// week87-3.cpp LeetCode 維度題目 Simulation 第1個
// 682. Baseball Game 模擬題

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: 建立陣列，儲存得分 運算

        for (string op : operations) { // Part01: C++ for迴圈
            //cout << "字串:" << op << "\n"; // Part02: 字元回傳，每下一個讀取
            // Part03: 字串運算

            if (op == "C") { // Clean 清除
                a.pop_back(); // Part06: 刪除最後一個 Part06: pop_back()
            } else if (op == "D") { // Double 雙倍
                a.push_back(a.back() * 2); // 取最後一個 Part06: push_back()
            } else if (op == "+") { // 加總
                int temp = a.back(); // 取最後一個
                a.pop_back(); // 移除最後一個
                int temp2 = a.back(); // 取新的最後一個
                a.push_back(temp); // 把剛剛移除的放回
                a.push_back(temp + temp2); // 把兩個相加的結果放入，兩項之和
            } else { // 字元轉整數，字串轉數字
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ 基礎迴圈 變數回傳 累加運算
            ans += now; //cout << now << ","; // Part07: 累加運算(得分)
        }

        return ans; //return 0; // 初始化 return 符 下個 "加總的結果"
    }
};
