class Solution {
public:

    void encoder(string& s){
        char mapping[256] = {0};
        char start = 'a';

        //Mapping
        for(int i =0; i < s.length() ; i++){
            char ch = s[i];
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }

        //encoding
        for(int i =0 ; i < s.length() ; i++){
            char ch = s[i];
            s[i] = mapping[ch];
        }

    }

    bool isIsomorphic(string s, string t) {
        encoder(s);
        encoder(t);
        return (s==t);
    }
};