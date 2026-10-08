// week05-3b.cpp 學習計畫 Built-in Functions 第1題
// LeetCode 58.Length of Last Word 最後那個字, 有幾個字母
// 其實前面需要寫 #include <stringstream> 不過 LeetCode 幫你偷偷寫好了
class Solution {
public:
    int lengthOfLastWord(string s){
        // 要用stringstream 之前, 要先#include <stringstream>
        stringstream ss(s); // week05 string字串 stream 串流 (cin 也是 stream)
        // week04 C++ 的圓括號, 是丟進去物件 初始化 的參數
        string ans; // week02 C++ 字串的宣告
        while(ss >> ans){ // 今天week05-1.cpp 有用到
            // 什麼都不做
        }
        return ans.length(); // week01 week02 字串的長度
    }
};
