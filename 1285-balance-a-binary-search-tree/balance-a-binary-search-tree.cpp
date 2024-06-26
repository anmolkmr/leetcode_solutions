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
    void inorder(vector<int> &temp,TreeNode* root){
        if(root==NULL)
        return ;
        inorder(temp,root->left);
        temp.push_back(root->val);
        inorder(temp,root->right);
    }
    TreeNode* solve(vector<int> &temp,int low,int high){
        if(low>high)return NULL;
        int mid=low+(high-low)/2;
        TreeNode *curr = new TreeNode(temp[mid]);
        curr->left=solve(temp,low,mid-1);
        curr->right=solve(temp,mid+1,high);
        return curr;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        inorder(in,root);
        return solve(in,0,in.size()-1);
    }
};