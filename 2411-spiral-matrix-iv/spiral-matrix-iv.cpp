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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int> (n,-1));
        int row=m,col=n;
        int toprow=0,leftcol=0,rightcol=n-1,bottomrow=m-1;
        while(head!=NULL){
            for(int i=leftcol;i<=rightcol;i++){
                if(head==NULL)break;
                ans[toprow][i]=head->val;
                head=head->next;
            }
            toprow++;
            for(int i=toprow;i<=bottomrow;i++){
                if(head==NULL)break;
                ans[i][rightcol]=head->val;
                head=head->next;
            }
            rightcol--;
            for(int i=rightcol;i>=leftcol;i--){
                if(head==NULL)break;
                ans[bottomrow][i]=head->val;
                head=head->next;
            }
            bottomrow--;

            for(int i=bottomrow;i>=toprow;i--){
                if(head==NULL)break;
                ans[i][leftcol]=head->val;
                head=head->next;
            }
            leftcol++;

        }
        return ans;
    }
};