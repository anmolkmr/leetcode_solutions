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
    void preorder(TreeNode* root,string &temp)
    {
        if(root==NULL)
        {
            return ;
        }
        temp+=(to_string(root->val));
        if(root->left!=NULL)
        {temp.push_back('(');
        preorder(root->left,temp);
        temp.push_back(')');}
        if(root->right!=NULL){
            if(root->left==NULL)
            {
                temp.push_back('(');
                temp.push_back(')');
            }
        temp.push_back('(');
        preorder(root->right,temp);
        temp.push_back(')');}
    }
    string tree2str(TreeNode* root) {
        string temp="";
        preorder(root,temp);
        return temp;
    }
};