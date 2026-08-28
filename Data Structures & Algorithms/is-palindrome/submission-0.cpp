class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";

        for (char &ch : s) {
            if (isalnum(ch)) {
                x += tolower(ch);
            }
        }

        for (int i = 0; i < x.size() / 2; i++) {
            if (x[i] != x[x.size() - 1 - i]) return false;
        }

        return true;
    }
};