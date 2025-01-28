class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'c'  && !st.empty()){
                char b = st.top();st.pop();
                if (st.empty()){return false;}
                char a = st.top();st.pop();
                if(a != 'a' || b !='b'){
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};