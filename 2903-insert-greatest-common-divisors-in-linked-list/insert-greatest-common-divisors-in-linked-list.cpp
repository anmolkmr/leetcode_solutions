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
    int gcd(int n,int m){
        int mn=min(n,m);
        // if(n%mn==0&&m%mn==0)
        // return mn;
        for(int i=mn;i>=2;i--){
            if(n%i==0&&m%i==0)
            return i;
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL)return head;
        ListNode* h=head,t=NULL;
        while(h->next!=NULL){
            int v1=h->val;
            int v2=h->next->val;
    
            ListNode* g=new ListNode(gcd(v1,v2));
            g->next=h->next;
            h->next=g;
            h=g->next;

        }
        return head;

    }
};