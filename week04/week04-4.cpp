// week04-5.cpp
// leetcode �ǲ߭p�e7�P66.plus one
// �q�S������ ��L�Ӫ��j��
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
        // �� �S����쵪��,�]�N�O9,9,9�@¾�ɬ�,�S����쵪��,�٭n�b�̫e��
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
