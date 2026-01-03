class Node{
    public:
    Node *list[26];
    bool End=false;

    bool containsKey(char ch){
        return list[ch-'a']!=NULL;
    }

    void put(char ch,Node *node){
        list[ch-'a']=node;
    }

    Node* get(char ch){
        return list[ch-'a'];
    }

    void setEnd(){
        End=true;
    }

    bool isEnd(){
        return End;
    }

};
class Trie {
public:
    Node *root;
    Trie() {
         root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        for(auto it:word){
            if(!node->containsKey(it)){
                node->put(it,new Node());
            }
            node = node->get(it);
        }
        node->setEnd();

    }
    
    bool search(string word) {
        Node *node = root;
        for(auto it:word){
            if(!node->containsKey(it))
            return false;
            node = node->get(it);
        }
        return node->isEnd();
        
    }
    
    bool startsWith(string prefix) {
         Node *node = root;
        for(auto it:prefix){
            if(!node->containsKey(it))
            return false;
            node = node->get(it);
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