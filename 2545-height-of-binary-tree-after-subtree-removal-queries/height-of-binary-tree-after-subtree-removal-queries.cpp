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
    int ans[100001];
    int maxCurrentHeight=0;
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        travlr(root,0);
        maxCurrentHeight=0;
        travrl(root,0);
        vector<int> res;
        for(auto it:queries){
            res.push_back(ans[it]);
        }
        return res;
    }

    void travlr(TreeNode* root,int d){
        if(root==NULL)return ;
        ans[root->val]=maxCurrentHeight;
        maxCurrentHeight=max(d,maxCurrentHeight);
        travlr(root->left,d+1);
        travlr(root->right,d+1);
    }
       void travrl(TreeNode* root,int d){
        if(root==NULL)return ;
        ans[root->val]=max(ans[root->val],maxCurrentHeight);
        maxCurrentHeight=max(d,maxCurrentHeight);
        travrl(root->right,d+1);
        travrl(root->left,d+1);
    }
};