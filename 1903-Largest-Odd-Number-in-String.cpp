class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i =n-1 ; i >=0 ; i--){
            if((num.back()-'0')%2 == 1){
                return num;
            }
            else{
                num.pop_back();
            }
        }
        return num;
    }
};