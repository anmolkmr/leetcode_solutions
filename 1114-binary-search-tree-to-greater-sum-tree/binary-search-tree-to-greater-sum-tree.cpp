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
    void inorder(vector<int> &s,TreeNode *r){
        if(r==NULL)
        return ;
        inorder(s,r->left);
        s.push_back(r->val);
        inorder(s,r->right);
    }
    void gst(map<int,int> &s,TreeNode *r){
        if(r==NULL)
        return ;
        gst(s,r->left);
        r->val=s[r->val];
        gst(s,r->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> sorted;
        inorder(sorted,root);
       
        int sum=0;
        map<int ,int> mp;
        for(int i=sorted.size()-1;i>=0;i--){
            sum=sum+sorted[i];
            mp[sorted[i]]=sum;
        }
        
        gst(mp,root);

        return root;
    }
};