// week07-3.cpp 學習計畫 simulation 第4題
// LeeCode 1041. Robot Bounded In Circle 機器人繞圈圈
// 上周的「機器人回到原來的位置」 比較簡單, 今天比較難
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0; // d方向 0:北 1:東 2:南 3:西
        instructions = instructions + instructions + instructions + instructions; // ??? 重複四次
        for(char c : instructions){
            if(c=='R') d = (d+1) % 4; // 右轉
            if(c=='L') d = (d+3) % 4; // 左轉(1個左轉 = 3個右轉)
            if(c=='G') { // Go往前走一格
                if(d==0) y++;
                if(d==1) x++;
                if(d==2) y--;
                if(d==3) x--;
            }
        }
        if(x==0 && y==0) return true; // 成功
        else return false; // 失敗
    }
};
