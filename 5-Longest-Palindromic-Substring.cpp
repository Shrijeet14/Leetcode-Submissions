class Solution {
public:
    int max_size = 0;
    string max_string = \\;
    //new
    //This function takes breakes the odd and even number of substrings corresponding to every character
    void expander(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int current_length = right - left + 1;
            if (current_length > max_size) {
                max_size = current_length;
                max_string = s.substr(left, current_length);
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        // max_size = 0; 
        // max_string = \\; 

        for (int center = 0; center < s.length(); center++) {
            // Odd length palindromes
            expander(s, center, center);
            // Even length palindromes
            expander(s, center, center + 1);
        }
        return max_string;
    }
};