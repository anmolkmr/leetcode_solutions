/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // bool trav(TreeNode *p,TreeNode *q){
    //     // if(p==NULL&&q!=NULL)return false;
    //     // if(q==NULL&&p!=NULL)return false;
    //     if(p==NULL&&q==NULL)
    //     return p==q;
    //     if(p->val!=q->val)return false;
    //     trav(p->left,q->left);
    //     trav(p->right,q->right);
    //     return true;
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p==NULL||q==NULL)
       return p==q;
       return (p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};