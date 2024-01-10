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
    map<TreeNode*,TreeNode*> parent;
    void markparent(TreeNode *root)
    {
        if(root==NULL)return ;
        parent[root->left]=root;
        parent[root->right]=root;
        markparent(root->left);
        markparent(root->right);
    }
    TreeNode* reach(TreeNode *root,int s)
    {
        if(root==NULL)
        return NULL;
        if(root->val==s)
        return root;
        TreeNode *left= reach(root->left,s);
        if(left!=NULL)return left;
        TreeNode *right=reach(root->right,s);
        if(right!=NULL)return right;
        return NULL;
    }
    int amountOfTime(TreeNode* root, int start) {
        markparent(root);
        TreeNode* s=reach(root,start);
        queue<pair<TreeNode*,int>> q;
        map<TreeNode*,bool> visited;
        int time=0;
        q.push({s,0});
        visited[s]=true;
        //cout<<s->val;
        while(!q.empty())
        {
            int n=q.size();
            time++;
            while(n--){
            pair<TreeNode*,int> node=q.front();
            q.pop();
            TreeNode* temp=node.first;
            if(temp->left!=NULL&&!visited[temp->left])
            {
                q.push({temp->left,time});
                visited[temp->left]=true;
            }
            if(temp->right!=NULL&&!visited[temp->right])
            {q.push({temp->right,time});
            visited[temp->right]=true;
            }
            if(parent[temp]!=NULL&&!visited[parent[temp]])
            {q.push({parent[temp],time});
            visited[parent[temp]]=true;
            }
            }

        }
        return time-1;
    }
};