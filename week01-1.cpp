// week01-1
// Leetcode 學習計畫 大海撈針 在 haystack 找到 needle
// 28. Find the Index of the First Occurrence in a Srtring
class Solution {
public:
    int strStr(string haystack, string needle) {
        // 要用迴圈， 把所有可能的位置，都找過一次
        // ex. sabutsad 很難過 要找 sad
        // i:0 sad 把haystack 檢前面N個字母
        //     sad
        //i:1  sad
        //     adb
        //i:2  sad ...
        //     abu
        int H = haystack.length(), N = needle.length();
        for(int i = 0 ; i <=H-N; i++){//試過所有位置
            if(haystack.substr(i,N)==needle)return i;
            // 從 i 開始,剪出 N 個字母 {竟然相同} 找到答案???
            }




        return -1; //沒有找到答案，要回傳-1代表失敗
    }
};
