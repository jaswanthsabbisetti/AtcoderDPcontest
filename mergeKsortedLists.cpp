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
    struct comparator{
        bool operator()(ListNode* l1,ListNode* l2){
            return l1->val > l2->val;
        }
        
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,comparator>pq;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        for(auto c: lists){
           if(c!=NULL) pq.push(c);
        }
        while(!pq.empty())
        {
            ListNode* temp = pq.top();
            pq.pop();
            if(temp->next!=NULL)
            {
                pq.push(temp->next);
            }
            dummy->next= temp;
            dummy = dummy->next;
        }
        return temp->next;
    }
};