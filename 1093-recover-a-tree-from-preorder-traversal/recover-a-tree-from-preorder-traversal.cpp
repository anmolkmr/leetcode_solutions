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
    int n;
    TreeNode* solve(int &i,int depth,string s){
        if(i>=n)return NULL;
          int j=i;
        while(j<n&&s[j]=='-'){
            j++;
        }
        int dash=j-i;
        if(dash!=depth)
        return NULL;
        i+=dash;
        int num=0;
        if(i<n&&isdigit(s[i])){
            while(isdigit(s[i])){
                num=(num*10)+(s[i]-'0');
                i++;
            }
        }
      
        TreeNode *root = new TreeNode(num);
        root->left=solve(i,depth+1,s);
        root->right=solve(i,depth+1,s);
        return root;

    }
    TreeNode* recoverFromPreorder(string traversal) {
        int i=0;
        n=traversal.length();
        return solve(i,0,traversal);
        
    }
};