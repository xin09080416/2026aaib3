//week12-1.cpp 每日挑戰題 2026-11-26
//LeetCode 3360. Stone Removal Game
//a同學、b同學,依序那走石頭　10,9,8,7,6,5,,...
// 沒辦法拿石頭, 就輸了
class Solution {
public:
    bool canAliceWin(int n) {
        // a先拿10, b再拿9, a再拿8, b再拿7
        for(int i=10;i>0;i--){
            n -= i; // 拿走i顆石頭
            if(n<0){ // 石頭拿不夠, 變負的
                if(i%2==0) return false; // A輸了(A拿偶數)
                else return true;// A得勝
            }
        }
        return true;// 記得最後要return
    }
};
