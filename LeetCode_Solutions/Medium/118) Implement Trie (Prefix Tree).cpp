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