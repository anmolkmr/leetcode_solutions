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
    void solve(TreeNode* root,vector<string> &st,string &s){
       // if(root==NULL)return ;
        if(root->left==NULL&&root->right==NULL)
        {
            s+=to_string(root->val);
            st.push_back(s);
            return ;
        }
        s+=to_string(root->val);
        if(root->left!=NULL){
        solve(root->left,st,s);
        s.pop_back();}
        if(root->right!=NULL){
        solve(root->right,st,s);
        s.pop_back();}

    }
    int sumNumbers(TreeNode* root) {
        vector<string> st;
        int sum=0;
        string s="";
        solve(root,st,s);
        for(auto it:st)
        sum+=stoi(it);
        return sum;
    }
};