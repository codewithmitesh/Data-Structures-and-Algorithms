/**
 * @file DesignAddandSearchWordsDataStructure.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-22
 *
 * @copyright Copyright (c) 2023
 *
 */
struct TrieNode
{
    bool end;                                                      // Flag to indicate whether this node represents the end of a word or not
    vector<TrieNode *> children = vector<TrieNode *>(26, nullptr); // Vector of pointers to child nodes for each possible character in the alphabet (26 lowercase English letters)
};

class WordDictionary
{
public:
    TrieNode *root;
    WordDictionary()
    {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    void addWord(string word)
    {
        TrieNode *curr = root;
        for (char c : word)
        {
            int index = c - 'a';
            if (!curr->children[index])
            {
                curr->children[index] = new TrieNode();
            }
            curr = curr->children[index];
        }
        curr->end = true; // Mark the last node as the end of the word
    }

    // Search for a word in the Trie
    bool pathSearch(string word, TrieNode *root, int index)
    {
        if (index == word.size())
            return root->end; // return true if the last node is marked as the end of a word
        TrieNode *node = root;
        char c = word[index];
        int idx = c - 'a';
        if (c == '.')
        { // if character is '.' check for remaining characters in all nodes
            for (int i = 0; i < 26; i++)
            {
                if (node->children[i])
                {
                    bool search = pathSearch(word, node->children[i], index + 1);
                    if (search)
                        return true;
                }
            }
            return false;
        }
        else
        {
            if (!node->children[idx])
                return false;                                        // if the current character doesn't exist return false
            return pathSearch(word, node->children[idx], index + 1); // if current character exists check for remaining characters
        }
    }

    bool search(string word)
    {
        return pathSearch(word, root, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */