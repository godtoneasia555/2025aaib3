// week08-1.cpp LeetCode �D���D
// 3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0; // ��1�B�A���έ�֪k�A����ݩ�G�i�쪺�`���
        while (n) {
            n = n / 2; // �鱼�@�h��
            N++;       // �h1�Ӧ��(�G�i�쪺���)
        }
        cout << "�{�b�o�{ n �O�]�G�i�쪺�^�`��ƩO " << N << " ���\n";
        int ans = 0; // ��2�B�A�A�ΰj��k�A�զX�X�u�������O1���v�i�쪺n���
        for (int i = 0; i < N; i++) {
            ans = ans * 2 + 1;
        }
        return ans;
    }
};
