class Solution {
public:
    string reverseOnlyLetters(string str) {

        int s = 0 ;
        int l = str.length()-1;

        while(s < l){
            if(((str[s]>='a' && str[s] <= 'z')||(str[s]>='A' && str[s] <= 'Z')) && ((str[l]>='a' && str[l] <= 'z')||(str[l]>='A' && str[l] <= 'Z'))){
                swap(str[s] , str[l]);
                s++;
                l--;
            }
            else if ( !((str[s]>='a' && str[s]<= 'z')||(str[s]>='A' && str[s] <= 'Z')) && ((str[l]>='a' && str[l]<= 'z')||(str[l]>='A' && str[l]<= 'Z'))){
                s++;
            }
            else if(((str[s]>='a' && str[s]<= 'z')||(str[s]>='A' && str[s] <= 'Z')) && !((str[l]>='a' && str[l]<= 'z')||(str[l]>='A' && str[l]<= 'Z'))){
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