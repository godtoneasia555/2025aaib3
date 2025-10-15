// week06-1.cpp
// LeetCode �m�߭p�e��4�D 242. Valid Anagram
// ���A2�Ӧr�� s, t, �ЧP�_���̪��r��,�O�_���ۦP(�i������)

class Solution {
public:
    bool isAnagram(string s, string t) {
        // ���ݬݦr����׬O�_�ۦP
        if(s.length() != t.length()) return false; // ���P,�e������

        // ����r�� s ���r��,�֭p�@�U
        int R[26] = {}; // �n���� Recycle �^����,�Ӥ����Ʀr���r��
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; // ���ӬO�p�g���r��,���n�ܦ�0~25���Ʀr
            R[c]++; // �֥[
        }

        // �A�� t ���r��,�ִ�r����,�Ψ�h��@,�����h���դ��P(����γo��)
        for(int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--; // �α���
            if(R[c]<0) return false; // ������,�N����
        }

        return true;
    }
};
