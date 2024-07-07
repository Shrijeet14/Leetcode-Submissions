class Solution {
public:
    string removeOuterParentheses(string s) {
        int left = 0;
        string ans;
        for(int i =0 ; i < s.length() ; i++){
            if(s[i]=='('){
                left++;
                if(left>1){
                    ans.push_back('(');
                }
            }
            else if(s[i]==')'){
                if(left != 1){
                    ans.push_back(')');
                }
                left--;
            }
        }
        return ans;
    }
};