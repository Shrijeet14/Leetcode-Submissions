class Solution {
public:
//new
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int minLengthString = INT_MAX ;
        string minString =\\;
        for(int i =0 ; i < strs.size() ; i++){
            if(strs[i].length() < minLengthString){
                minLengthString = strs[i].length();
                minString = strs[i];
            }
        }
//Nothing
        for(int i =0 ; i< minLengthString ; i++){
            int flag = 0;

            for(int j =0 ; j < strs.size()  ; j++ ){
                string s = strs[j];
                if(s[i] != minString[i]){
                    flag = 1;
                }
            }
            if(flag == 0){
                ans.push_back(minString[i]);
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};