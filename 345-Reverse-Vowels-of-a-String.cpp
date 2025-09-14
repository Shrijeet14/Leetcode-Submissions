class Solution {
public:
    string reverseVowels(string str) {
        int s =0;
        int l =str.length()-1;

        while(s < l){
           if((string(\aeiouAEIOU\).find(str[s]) != string::npos) && (string(\aeiouAEIOU\).find(str[l]) != string::npos)){
            swap(str[s] , str[l]);
            s++;
            l--;
           }
           else if((string(\aeiouAEIOU\).find(str[s]) == string::npos) && (string(\aeiouAEIOU\).find(str[l]) != string::npos)){
            s++;
           }
           else if((string(\aeiouAEIOU\).find(str[s]) != string::npos) && (string(\aeiouAEIOU\).find(str[l]) == string::npos)){
            l--;
           }
           else{
            s++;
            l--;
           }
        }
        return str;
    }
};