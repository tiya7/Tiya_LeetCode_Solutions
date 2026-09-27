class Trie {
public:
    Trie() {
        
    }
    
    void insert(string word) {
        
    }
    
    bool search(string word) {
        
    }
    
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 *class Trie {
public:
    struct Node {
        Node* child[26];
        bool end;

        Node() {
            end = false;
            for (int i = 0; i < 26; i++)
                child[i] = nullptr;
        }
    };

    Node* root;

    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* curr = root;

        for (char c : word) {
            int index = c - 'a';

            if (curr->child[index] == nullptr)
                curr->child[index] = new Node();

            curr = curr->child[index];
        }

        curr->end = true;
    }
    
    bool search(string word) {
        Node* curr = root;

        for (char c : word) {
            int index = c - 'a';

            if (curr->child[index] == nullptr)
                return false;

            curr = curr->child[index];
        }

        return curr->end;
    }
    
    bool startsWith(string prefix) {
        Node* curr = root;

        for (char c : prefix) {
            int index = c - 'a';

            if (curr->child[index] == nullptr)
                return false;

            curr = curr->child[index];
        }

        return true;
    }
};
class Trie {
public:
    vector<string> words;

    Trie() {
    }
    
    void insert(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        for (string x : words) {
            if (x == word)
                return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        for (string x : words) {
            if (x.substr(0, prefix.size()) == prefix)
                return true;
        }
        return false;
    }
};