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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode(0),*temp=head,*trav=ans;
        while(temp->next!=NULL){
            if(temp->val==0){
                int s=0;
                temp=temp->next;
                while(temp->val!=0){
                    s+=temp->val;
                    temp=temp->next;
                }
                trav->next=new ListNode(s);
                trav=trav->next;
            }
        }
        return ans->next;        
    }
};