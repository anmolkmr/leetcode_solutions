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
    void finddiff(TreeNode* root,int &mini,int &maxi)
    {
        if(root==NULL)return ;
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        finddiff(root->left,mini,maxi);
        finddiff(root->right,mini,maxi);
    }
    void preorder(TreeNode* root,int &mx)
    {
        if(root==NULL)return ;
        int minimum=INT_MAX,maximum=INT_MIN;
        finddiff(root,minimum,maximum);
        mx=max(mx,max(abs(root->val-minimum),abs(root->val-maximum)));
        preorder(root->left,mx);
        preorder(root->right,mx);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mx=INT_MIN;
        preorder(root,mx);
        return mx;
    }
};