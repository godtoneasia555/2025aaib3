// week08-2.cpp LeetCode �ǲߥD�D Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// ���� 3x3 ���r��
class Solution {
public:
    void myPrint(int a[3][3]) { // ����A�N�ѽL�L�X��
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // �M�ŴѽL
        int now = 1; // �{�b�O��1�Ӫ��a
        // now=1 ��ܪ��aA, now=2 ��ܪ��aB
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; // �N�Ӧ�m�ФW�ثe���a
            myPrint(a); // ��ܷ�e�ѽL

            if (now == 1) now = 2; // ���U�@�쪱�a
            else now = 1;
        }

        return "A"; // ���H�K return "A"
    }
};
