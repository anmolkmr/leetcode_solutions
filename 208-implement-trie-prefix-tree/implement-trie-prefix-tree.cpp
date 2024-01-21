class Trie {
    public:
    struct Node{
        Node *list[26];
        bool isEnd=false;
        bool iscontain(int ind)
        {
            return list[ind]!=NULL;
        }
    };
    private:
    Node* root;
public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->iscontain(word[i]-'a'))
            {
                node->list[word[i]-'a']=new Node();
            }
            node=node->list[word[i]-'a'];
        }
        node->isEnd=true;
    }
    
    bool search(string word) {
        Node *node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->iscontain(word[i]-'a'))
            return false;
            node=node->list[word[i]-'a'];
        }
        return node->isEnd==true;
    }
    
    bool startsWith(string prefix) {
         Node *node=root;
        for(int i=0;i<prefix.length();i++)
        {
            if(!node->iscontain(prefix[i]-'a'))
            return false;
            node=node->list[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */