class Solution {
public:

    vector<int> frequencyCounter(string str){
        vector<int> mapping(256 , 0);
        for(int i =0 ; i < str.length() ; i++){
            char ch = str[i];
            mapping[ch]++;
        }
        return mapping;
    }
    bool isAnagram(string s, string t) {
        vector<int> map1 = frequencyCounter(s);
        vector<int> map2 = frequencyCounter(t);
        return (map1 == map2);
    }
};