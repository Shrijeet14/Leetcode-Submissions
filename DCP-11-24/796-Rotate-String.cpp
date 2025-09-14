class Solution {
public:
    bool rotateString(string s, string goal) {
        int n  = s.length();
        for(int i = 0 ; i < n ; i ++){
            int newLen = s.length();
            if(s.substr(i,newLen)==goal){
                return true;
            }
            else{
                s.push_back(s[i]);
            }
        }
        return false;
    }
};