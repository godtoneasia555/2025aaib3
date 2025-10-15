// week06-5.cpp 今天的 LeetCode 挑戰題，有點難
// 3350. Adjacent Increasing Subarrays Detection II
// 題目跟昨天的 3349 很像。昨天是給你 k 今天問你「最大可能的 k」
// 3349 用 combo，今天 3350 用兩個 combo 左到右、右到左，累積多少

class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();  // 陣列的大小
        vector<int> left(N, 1);  // 左到右的 combo
        vector<int> right(N, 1); // 右到左的 combo

        // 左到右的 combo 逐一更新
        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i]) left[i] = left[i - 1] + 1;
        }

        // 右到左的 combo 逐一更新
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) right[i] = right[i + 1] + 1;
        }

        int ans = 0;
        for (int i = 1; i < N - 1; i++) {
            int now = min(left[i], right[i + 1]);
            if (now > ans) ans = now;
        }

        return ans;
    }
};
