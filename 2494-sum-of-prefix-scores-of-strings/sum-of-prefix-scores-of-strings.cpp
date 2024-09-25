struct Trie{
    int countP=0;
    Trie* children[26];
};


class Solution {
public:
    Trie* getTrieNode(){
    Trie* newNode= new Trie();
    for(int i=0;i<26;i++){
        newNode->children[i]=nullptr;
    }
    newNode->countP=0;
    return newNode;
}
    void insert(string w,Trie* root){
        Trie* crawl=root;
        for(auto it:w){
            int idx=it-'a';
            if(!crawl->children[idx]){
                crawl->children[idx]=getTrieNode();
            }
            crawl->children[idx]->countP+=1;
            crawl=crawl->children[idx];

        }
    }
    int getScore(string w,Trie* root){
        Trie* crawl=root;
        int score=0;
        for(auto it:w){
            int idx=it-'a';
            score+=crawl->children[idx]->countP;
            crawl=crawl->children[idx];
        }
        return score;

    }
    vector<int> sumPrefixScores(vector<string>& words) {
        int n=words.size();
        Trie* root= getTrieNode();
        for(auto it:words){
            insert(it,root);
        }
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=getScore(words[i],root);
        }
        return res;      
    }
};