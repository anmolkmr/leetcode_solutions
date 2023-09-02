/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        string s="";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL)
            s+="#,";
            else s+=((to_string(temp->val))+',');
            if(temp!=NULL)
            {q.push(temp->left);
            q.push(temp->right);}
        }
        cout<<s;
        return s;        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        stringstream s(data);
      
        
        queue<TreeNode *> q;
        string d;
        getline(s,d,',');
        
        TreeNode *root=new TreeNode(stoi(d));
        q.push(root);
    
        while(!q.empty())
        {
            TreeNode *node=q.front();
            q.pop();
            getline(s,d,',');
            if(d=="#")
            {
                node->left=NULL;
            }
            else 
            {
                TreeNode *leftroot=new TreeNode(stoi(d));
                node->left=leftroot;
             
                q.push(leftroot);
            }
            getline(s,d,',');
            if(d=="#")
            {
                node->right=NULL;
             
            }
            else 
            {
                TreeNode *rightroot=new TreeNode(stoi(d));
                node->right=rightroot;
          
                q.push(rightroot);
            }
            
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));