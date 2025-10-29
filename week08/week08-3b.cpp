// week08-3.cpp LeetCode �ǲߥD�D Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// ���� 3x3 ���r�� (�t�ӭt�P�_)
class Solution {
public:
    // myPrint() �p���⪺�{���i����

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // ���j�A��, �|�۰ʲM��
        int now = 1;      // ���aA��1, ���aB��2
        int winner = 0;   // 1�N��AĹ, 2�N��BĹ

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  // �b�ѽL�W�аO

            // �P�_��ƬO�_�s���@�u
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) winner = now;
            // �P�_����
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) winner = now;
            // �P�_�D�﨤�u
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) winner = now;
            // �P�_�Ϲ﨤�u
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) winner = now;

            if (winner != 0) break; // �w���X�ӭt�i���e����

            // �����a
            if (now == 1) now = 2;
            else now = 1;
        }

        // �ھڵ��G�^��
        if (winner == 1) return "A";       // AĹ
        else if (winner == 2) return "B";  // BĹ
        else if (moves.size() == 9) return "Draw"; // �Ѻ�����
        else return "Pending";             // �|������
    }
};
