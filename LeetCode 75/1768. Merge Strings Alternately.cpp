#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int length1 = word1.length();
        int length2 = word2.length();
        int maxLength = max(length1, length2);
        
        for (int i = 0; i < maxLength; i++) {
            if (i < length1) {
                merged += word1[i];
            }
            
            if (i < length2) {
                merged += word2[i];
            }
        }
        
        return merged;
    }
};