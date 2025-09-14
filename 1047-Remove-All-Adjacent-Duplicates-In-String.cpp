// approach-2
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0;
        while(i < s.length()){
            int n = temp.length();
            if(n>0 && s[i] == temp[n-1]){
                temp.pop_back();
            }
            else{
                temp.push_back(s[i]);
            }
            i++;
        }
        return temp;
    }
};