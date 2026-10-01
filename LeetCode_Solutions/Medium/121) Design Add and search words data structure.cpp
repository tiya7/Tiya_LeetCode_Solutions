class WordDictionary {
public:
    struct Node {
        Node* child[26];
        bool end;

        Node() {
            end = false;
            for (int i = 0; i < 26; i++)
                child[i] = NULL;
        }
    };

    Node* root;

    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {
        Node* curr = root;

        for (char c : word) {
            int x = c - 'a';

            if (curr->child[x] == NULL)
                curr->child[x] = new Node();

            curr = curr->child[x];
        }

        curr->end = true;
    }

    bool searchWord(Node* curr, string& word, int index) {
        if (index == word.size())
            return curr->end;

        if (word[index] == '.') {
            for (int i = 0; i < 26; i++) {
                if (curr->child[i] != NULL &&
                    searchWord(curr->child[i], word, index + 1))
                    return true;
            }
            return false;
        }

        int x = word[index] - 'a';

        if (curr->child[x] == NULL)
            return false;

        return searchWord(curr->child[x], word, index + 1);
    }

    bool search(string word) {
        return searchWord(root, word, 0);
    }
};