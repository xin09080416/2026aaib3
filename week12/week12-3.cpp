// week12-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); // 上週教的工具一
        ListNode* now = ans; // 上週教的工具二
        int carry = 0; // 進位, week12重點
        // 新的版本
        while(l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr) carry += l1->val; // 如果11還有, 就把val加進去
            if(l2 != nullptr) carry += l2->val; // 如果12還有, 就把val加進去
            now->next = new ListNode(carry % 10);
            carry = carry / 10; // 進位, week12重點
            now = now->next;
            if(l1 != nullptr) l1 = l1->next; // 如果還有, 才能換下一筆
            if(l2 != nullptr) l2 = l2->next;
        }
        if(carry) now->next = new ListNode(carry); // 離開迴圈後, 如果還有carry 進位, 不能漏掉
        return ans->next;
        //樓下的版本, 沒辦法處理「長度不同」的狀況
        //while(11 != nullptr && 12 != nullptr) { // 上週教的工具二
            //int val = 11->val + 12->val; // 今天要做加法
            //now->next = new ListNode(val); // 上週教的工具二
            //now = now->next; //上週教的工具二
            //11 = 11->next; // 上週教的工具二
            //12 = 12->next; // 上週教的工具二
        //}

        //return ans;
    }
};
