class Solution {
public:
//using Recursion


    string removeOccurrences(string &s, string &part) {
        if(s.find(part) == string::npos){
            return s;
        }
        s.erase(s.find(part) , part.length());
        removeOccurrences(s , part);
        return s;
    }
};