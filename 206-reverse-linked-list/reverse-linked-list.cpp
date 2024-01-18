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
class Solution {
public:
    ListNode* reverse(ListNode* &prev, ListNode* curr){
        //base case
        if(curr == NULL){
            return prev;
        }

        //ek case solve kardo
        ListNode* forward = curr->next;
        curr->next = prev;

        //baki recursion sambal lega
        return reverse(curr, forward);
    }


    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        head = reverse(prev, curr);
        return head;
    }
};