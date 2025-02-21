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
class FindElements {
public:
    map<int,int> mp;
    void solve(TreeNode* root){
        if(root==NULL)return ;
        if(root->left!=NULL){
            int key=(root->val)*2+1;
            mp[key]++;
            root->left->val=key;
        }
        solve(root->left);
        if(root->right!=NULL){
            int key=(root->val)*2+2;
            mp[key]++;
            root->right->val=key;
        }
        solve(root->right);
    }
    FindElements(TreeNode* root) {
       root->val=0;
       mp[0]=1;
        solve(root);
    }
    
    bool find(int target) {
        if(mp[target]>0)
        return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */