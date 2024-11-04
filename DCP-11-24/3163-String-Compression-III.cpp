// class Solution {
// public:
//     string compressedString(string word) {
//         map<char , int > mpp;
//         map<char , ;
//         //Pre computing
//         for(int i = 0 ; i < word.size() ; i++){
//             mpp[word[i]]++;
//             ord.push_back(word[i]);
//         }
//         string comp;
//         for(int i = 0 ; i < ord.size() ; i++){
//             int freq = mpp[ord[i]];
//             while(freq > 9){
//                 freq = freq-9;
//                 comp += to_string(9);
//                 comp.push_back(ord[i]);
//             }            
//             comp += to_string(freq);
//             comp.push_back(ord[i]);
//         }    
//         return comp;    
//     }
// };
class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int i = 0;
        
        while (i < word.length()) {
            char currentChar = word[i];
            int count = 0;
            
            // Count consecutive occurrences of currentChar
            // But limit to maximum of 9 as per problem constraint
            while (i < word.length() && word[i] == currentChar && count < 9) {
                count++;
                i++;
            }
            
            // Add count and character to result
            comp += to_string(count) + currentChar;
        }
        
        return comp;
    }
};