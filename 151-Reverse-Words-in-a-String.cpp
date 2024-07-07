class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans = \\;

        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9')) {
                int j = i;
                while (j < s.length() && s[j] != ' ') {
                    j++;
                }
                v.push_back(s.substr(i, j - i));
                i = j;
            }
        }

        while (!v.empty()) {
            ans.append(v.back());
            v.pop_back();
            if (!v.empty()) {
                ans.push_back(' ');
            }
        }

        return ans;
    }
};
