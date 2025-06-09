#include <vector>
#include <string>
using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    // Step 1: Precompute the rank of each character in the alien language
    vector<int> rank(26);
    for (int i = 0; i < 26; ++i) {
        rank[order[i] - 'a'] = i;
    }

    // Step 2: Compare each pair of adjacent words
    for (int i = 0; i < words.size() - 1; ++i) {
        string& word1 = words[i];
        string& word2 = words[i + 1];
        int minLen = min(word1.size(), word2.size());
        bool foundDifference = false;

        for (int j = 0; j < minLen; ++j) {
            int c1 = rank[word1[j] - 'a'];
            int c2 = rank[word2[j] - 'a'];
            if (c1 < c2) {
                foundDifference = true;
                break; // correct order, move to next pair
            }
            if (c1 > c2) {
                return false; // wrong order
            }
            // If equal, continue to next character
        }
        // If all characters are the same, but word1 is longer, it's wrong
        if (!foundDifference && word1.size() > word2.size()) {
            return false;
        }
    }
    return true;
}
