/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// week11-1.cpp 學習計畫 Linked List 第2題
// LeetCode 206. Reverse Linked List
// 鏈結串列, 需要2個小工具幫忙
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // 伸縮自如的陣列, 要把Linked List 裡面的值 copy 到陣列
        while (head != nullptr){
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for(int i=a.size()-1; i>=0;i--){
            now->next = new ListNode(a[i]);
            now = now->next;
            }
        return ans->next;

        //ListNode* now = head; // (2) 全部走一次
        //while(now != nullptr){ // (2) 全部走一次 用while 一直走
           //cout << now->val << " "; //換下一個
            //now = now->next; // 下一個
        //}
        //ListNode* ans = new ListNode(999); // (1) 學習怎麼把 Linked List 的 Node 準備好
        //return ans;
    }
};
