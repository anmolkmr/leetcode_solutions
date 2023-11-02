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
    void trav(TreeNode *root,vector<TreeNode*> &allnode,int &ans)
    {
        if(root==NULL)
        return ;
        // allnode.push_back(root);
        int count=0,sum=0;
        avg(root,count,sum);
        if(root->val==sum/count)
        ans++;
        trav(root->left,allnode,ans);
        trav(root->right,allnode,ans);
    }
    void avg(TreeNode *root,int &count,int &sum)
    {
        if(root==NULL)return ;
        count++;
        sum+=root->val;
        avg(root->left,count,sum);
        avg(root->right,count,sum);
    }
    int averageOfSubtree(TreeNode* root) {
        vector<TreeNode*> allnode;
        int ans=0;
        trav(root,allnode,ans);
        return ans;
    }
};