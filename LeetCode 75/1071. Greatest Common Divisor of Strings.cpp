#include <string>

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        int length1 = str1.length();
        int length2 = str2.length();
        
        int gcdLength = gcd(length1, length2);
        
        return str1.substr(0, gcdLength);      
    }

    private:
      int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        return a;
    }
};