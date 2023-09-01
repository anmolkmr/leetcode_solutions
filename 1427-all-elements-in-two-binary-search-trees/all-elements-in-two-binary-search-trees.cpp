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
    void solve(TreeNode* root,multiset<int> &n)
    {
        if(root==NULL)
        return ;
        solve(root->left,n);
        n.insert(root->val);
        solve(root->right,n);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        multiset<int> num;
        vector<int> ans;
        solve(root1,num);
        solve(root2,num);
        for(auto it:num)
        {
            ans.push_back(it);
        }
        return ans;
        
    }
};