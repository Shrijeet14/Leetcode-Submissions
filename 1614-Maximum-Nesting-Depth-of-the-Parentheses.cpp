class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int open=0;
        for(int i =0 ; i < s.length() ; i++){
            if(s[i]=='('){
                open++;
                if(open>max){
                    max=open;
                }
            }
            else if(s[i]==')'){
                open--;
            }
        }
        return max;   
    }
};