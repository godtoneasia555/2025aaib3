// week01-1
// Leetcode �ǲ߭p�e �j�����w �b haystack ��� needle
// 28. Find the Index of the First Occurrence in a Srtring
class Solution {
public:
    int strStr(string haystack, string needle) {
        // �n�ΰj��A ��Ҧ��i�઺��m�A����L�@��
        // ex. sabutsad �����L �n�� sad
        // i:0 sad ��haystack �˫e��N�Ӧr��
        //     sad
        //i:1  sad
        //     adb
        //i:2  sad ...
        //     abu
        int H = haystack.length(), N = needle.length();
        for(int i = 0 ; i <=H-N; i++){//�չL�Ҧ���m
            if(haystack.substr(i,N)==needle)return i;
            // �q i �}�l,�ťX N �Ӧr�� {���M�ۦP} ��쵪��???
            }




        return -1; //�S����쵪�סA�n�^��-1�N����
    }
};
