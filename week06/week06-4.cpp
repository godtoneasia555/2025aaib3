// week06-4.cpp 昨天的 LeetCode 題單
// nums 連到哪，數字會有些增值，請問有沒有任何 k 個相同區別，裡面都是遞增?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 6 1 表示 k 成長，不會管中間，用原來的 f[i]1

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // 使用兩個數組區間 combo 進行
        int N = nums.size(); // 防止大小小
        vector<int> combo(N, 1); // 初始化，裡面放數值，原來的 f[i]=1

        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])  // 判斷遞增
                combo[i] = combo[i - 1] + 1;
        }

        // 檢查 combo 內是否連續有 k 個遞增，有合格就結束，否則 false
        for (int i = 0; i < N; i++) {
            if (combo[i] >= k) return true;
        }
        return false;
    }
};
