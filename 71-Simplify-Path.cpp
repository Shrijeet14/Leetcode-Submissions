class Solution {
public:
    string simplifyPath(string path){
        string ans;
        stack<string>st;
        int i = 0;
        while(i < path.size()){
            int start = i;
            int end  = i+1;
            while(end < path.size() && path[end] != '/'){
                end++;
            }
            i = end;
            string tempstr = path.substr(start, end-start);
            if(tempstr == \/.\ || tempstr == \/\){
                continue;
            }
            else if(tempstr == \/..\){
                if(!st.empty()){
                    st.pop();
                }
            }
            else {
                st.push(tempstr);
            }
        }
        stack<string> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        
        string s = temp.empty() ? \/\ : \\;
        while(!temp.empty()){
            ans = ans + temp.top();
            temp.pop();
        }
        if(ans.empty()){
            return \/\;
        }
        return ans;
    }
};