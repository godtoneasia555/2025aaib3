// week04-5.cpp
// leetcode 學習計畫7周66.plus one
// 從又往左看 到過來的迴圈
// 1,9,9

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0; i--){
            if( digits[i] == 9 )digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
        // 都 沒有找到答案,也就是9,9,9一職盡為,沒有找到答案,還要在最前面
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
