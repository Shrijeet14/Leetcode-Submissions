class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]==']'){
                string temp;
                while(st.top() != \[\){
                    temp = temp + st.top();
                    st.pop();
                }
                st.pop();
                string numStr =\\;
                while (!st.empty() && isdigit(st.top()[0])) {
                    numStr = st.top() + numStr;
                    st.pop();
                }
                int num = stoi(numStr);
                for(int i = 0; i < num ; i++){
                    st.push(temp);
                }
            }
            else{
                st.push(string(1, s[i]));
            }
        }
        string ans = \\;
        while(!st.empty()){
            ans = ans + st.top(); st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};