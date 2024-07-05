class Solution {
public:


    void encoder(string& pattern){
        char mapping[300] = {0};
        char start = 'a';
        //Creation of maping array
        for(int i = 0 ; i < pattern.length() ; i++){
            char ch = pattern[i];
            mapping[ch] = start;
            start++;
        }
        //Encoding with the mapped array
        for(int i =0 ; i < pattern.length() ; i++){
            char ch = pattern[i];
            pattern[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        encoder(pattern);
        vector<string> ans;
        for(int i =0 ; i < words.size() ; i++){
            string tempString = words[i];
            encoder(tempString);
            if(tempString == pattern){
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};