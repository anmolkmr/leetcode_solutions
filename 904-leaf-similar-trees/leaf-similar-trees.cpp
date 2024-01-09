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
    void pre(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)return ;
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->val);
        }
        pre(root->left,ans);
        pre(root->right,ans);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        pre(root1,v1);
        pre(root2,v2);
        if(v1==v2)return true;
        return false;
    }
};