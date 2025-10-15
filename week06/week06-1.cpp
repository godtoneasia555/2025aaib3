// week06-1.cpp
// LeetCode 練習計畫第4題 242. Valid Anagram
// 給你2個字串 s, t, 請判斷它們的字母,是否都相同(可做順序)

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 先看看字串長度是否相同
        if(s.length() != t.length()) return false; // 不同,前提失敗

        // 先把字母 s 的字母,累計一下
        int R[26] = {}; // 要有個 Recycle 回收桶,來分類數字的字母
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; // 本來是小寫的字母,但要變成0~25的數字
            R[c]++; // 累加
        }

        // 再把 t 的字母,累減字母桶,用到則減一,掛掉則明白不同(不能用這個)
        for(int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--; // 用掉它
            if(R[c]<0) return false; // 不夠用,就失敗
        }

        return true;
    }
};
