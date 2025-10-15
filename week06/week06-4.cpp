// week06-4.cpp �Q�Ѫ� LeetCode �D��
// nums �s����A�Ʀr�|���ǼW�ȡA�аݦ��S������ k �ӬۦP�ϧO�A�̭����O���W?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 6 1 ��� k �����A���|�ޤ����A�έ�Ӫ� f[i]1

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // �ϥΨ�ӼƲհ϶� combo �i��
        int N = nums.size(); // ����j�p�p
        vector<int> combo(N, 1); // ��l�ơA�̭���ƭȡA��Ӫ� f[i]=1

        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])  // �P�_���W
                combo[i] = combo[i - 1] + 1;
        }

        // �ˬd combo ���O�_�s�� k �ӻ��W�A���X��N�����A�_�h false
        for (int i = 0; i < N; i++) {
            if (combo[i] >= k) return true;
        }
        return false;
    }
};
