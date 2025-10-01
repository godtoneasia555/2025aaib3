// week04-4.cpp
// leetcode 學習計畫10提 896.monotonic array
// 只有稱加 只有減少 的陣列,

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0; //如果有增加 up變成1 如果有減少 down變成1
        for(int i=1; i<nums.size(); i++){
            if( nums[i-1] < nums[i]) up = 1;
            if( nums[i-1] > nums[i]) down = 1;
        }
        if(up==1 && down==1) return false;
        return true;

    }
};
