

    
    struct Node
    {  
        struct Node* next[26];
        bool isWord;
    
    Node()
    {
        
    isWord = false;
       
    for(int i =0;i<26;i++)
    {
        next[i] =nullptr;
    }
    }
    };
    

class Trie {
public:
    /** Initialize your data structure here. */
    Node *root;
    Trie() {
        root = new Node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *temp = root;
        
        for(char &c: word)
        {
            if(!temp->next[c-'a'])
            {
                temp->next[c-'a'] = new Node();
            }
            temp = temp ->next[c-'a'];
        }
        temp->isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *temp = root;
        
        for(char &c : word)
        {
            if(!temp->next[c-'a'])
            {
                return false;
            }
            temp = temp->next[c-'a'];
        }
        return temp->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *temp = root;
        
        for(char &c: prefix)
        {
            if(!temp->next[c-'a'])
            {
                return false;
            }
            temp = temp->next[c-'a'];
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