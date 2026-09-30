
class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        
    }
    
    bool search(string word) {
        
    }
};
class WordDictionary {
public:
    struct Node {
        Node* child[26];
        bool isEnd;

        Node() {
            isEnd = false;
            for (int i = 0; i < 26; i++)
                child[i] = nullptr;
        }
    };

    Node* root;

    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* curr = root;

        for (char c : word) {
            int index = c - 'a';

            if (curr->child[index] == nullptr)
                curr->child[index] = new Node();

            curr = curr->child[index];
        }

        curr->isEnd = true;
    }

    bool searchHelper(Node* curr, string& word, int index) {
        if (index == word.size())
            return curr->isEnd;

        char c = word[index];

        if (c != '.') {
            int pos = c - 'a';

            if (curr->child[pos] == nullptr)
                return false;

            return searchHelper(curr->child[pos], word, index + 1);
        }

        for (int i = 0; i < 26; i++) {
            if (curr->child[i] != nullptr) {
                if (searchHelper(curr->child[i], word, index + 1))
                    return true;
            }
        }

        return false;
    }

    bool search(string word) {
        return searchHelper(root, word, 0);
    }
};