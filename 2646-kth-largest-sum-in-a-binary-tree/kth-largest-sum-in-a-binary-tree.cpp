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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        vector<long long int> t;
        q.push(root);
        while(!q.empty())
        {
            long long int sum=0;
            vector<TreeNode *> temp;
            while(!q.empty())
            {
                temp.push_back(q.front());
                q.pop();
            }
            for(auto it:temp)
            {
                sum+=it->val;
                if(it->left)q.push(it->left);
                if(it->right)q.push(it->right);
            }
            t.push_back(sum);
        }
        sort(t.begin(),t.end());
        int ele=t.size()-k;
        if(ele<0)
        return -1;
        return t[ele];
        
    }
};