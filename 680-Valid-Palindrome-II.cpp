class Solution {
public:

    bool palindrome(string str , int s , int l){
        while(s <= l){
            if(str[s] != str[l]){
                return false;
            }
            s++;
            l--;
        }
        return true;
    }


    bool validPalindrome(string str) {
        int start =0 ;
        int last =str.length()-1;

        while(start <= last){
            if(str[start] != str[last]){
                int f1 = palindrome(str , start+1 , last);
                int f2 = palindrome(str , start , last-1);
                if(f1 == 1 || f2 == 1){
                    return true;  
                }
                else{
                    return false;
                }
            }
            start++;
            last--;
        }
        return true;
    }
};