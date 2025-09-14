class Solution {
public:
    string removeSpecialChar(string s) {
        int i = 0;
        while (i < s.length()) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 'a' - 'A';
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {}
            else if (s[i] >= '0' && s[i] <= '9') {}
            else {
                s.erase(i, 1);
                continue;
            }
            i++;
        }
        return s;
    }

    bool isPalindrome(string s) {
        string str = removeSpecialChar(s);
        int start = 0;
        int last = str.length() - 1;
        while (start <= last) {
            if (str[start] != str[last]) {
                return false;
            }
            start++;
            last--;
        }
        return true;
    }
};