// week87-3.cpp LeetCode �����D�� Simulation ��1��
// 682. Baseball Game �����D

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: �إ߰}�C�A�x�s�o�� �B��

        for (string op : operations) { // Part01: C++ for�j��
            //cout << "�r��:" << op << "\n"; // Part02: �r���^�ǡA�C�U�@��Ū��
            // Part03: �r��B��

            if (op == "C") { // Clean �M��
                a.pop_back(); // Part06: �R���̫�@�� Part06: pop_back()
            } else if (op == "D") { // Double ����
                a.push_back(a.back() * 2); // ���̫�@�� Part06: push_back()
            } else if (op == "+") { // �[�`
                int temp = a.back(); // ���̫�@��
                a.pop_back(); // �����̫�@��
                int temp2 = a.back(); // ���s���̫�@��
                a.push_back(temp); // ���貾������^
                a.push_back(temp + temp2); // ���Ӭۥ[�����G��J�A�ⶵ���M
            } else { // �r�����ơA�r����Ʀr
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ ��¦�j�� �ܼƦ^�� �֥[�B��
            ans += now; //cout << now << ","; // Part07: �֥[�B��(�o��)
        }

        return ans; //return 0; // ��l�� return �� �U�� "�[�`�����G"
    }
};
