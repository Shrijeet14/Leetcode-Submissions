class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        queue<char> q;
        vector<char> ans;

        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
            q.push(s[i]);
            while(!q.empty()){
                if(mp[q.front()] > 1){
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if(q.empty()){
                ans.push_back(-1);
            }
        }

        if(ans.empty()){
            return -1;
        }
        char a = ans.back();
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == a){
                return i;
            }
        }
        return -1;
    }
};