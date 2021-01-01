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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int len = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        //handle corner cases s
        if(head==nullptr)return head;
        if(len==1)return nullptr;
        if(n==len)return head->next;
        int pos = len-n+1;
        ListNode* curr = head;
        ListNode* prev = NULL;
        for(int i=0;i<pos-1;i++)
        {
            prev = curr;
            curr = curr->next;
        }
        
        ListNode* next_next = curr->next;
        prev->next = next_next;
        return head;
    }
};