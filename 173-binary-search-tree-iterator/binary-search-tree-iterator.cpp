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
class BSTIterator {
public:
    stack<TreeNode*> temp;
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    
    int next() {
        TreeNode *node=temp.top();
        temp.pop();
        if(node->right)
        pushall(node->right);
        return node->val;
    }
    
    bool hasNext() {
        return !temp.empty();
    }
    void pushall(TreeNode* r)
    {
        while(r)
        {
            temp.push(r);
            r=r->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */