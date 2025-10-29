// week08-3.cpp LeetCode 學習主題 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// 模擬 3x3 井字棋 (含勝負判斷)
class Solution {
public:
    // myPrint() 小幫手的程式可略掉

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號, 會自動清空
        int now = 1;      // 玩家A標1, 玩家B標2
        int winner = 0;   // 1代表A贏, 2代表B贏

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  // 在棋盤上標記

            // 判斷橫排是否連成一線
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) winner = now;
            // 判斷直排
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) winner = now;
            // 判斷主對角線
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) winner = now;
            // 判斷反對角線
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) winner = now;

            if (winner != 0) break; // 已分出勝負可提前結束

            // 換玩家
            if (now == 1) now = 2;
            else now = 1;
        }

        // 根據結果回傳
        if (winner == 1) return "A";       // A贏
        else if (winner == 2) return "B";  // B贏
        else if (moves.size() == 9) return "Draw"; // 棋滿平手
        else return "Pending";             // 尚未結束
    }
};
