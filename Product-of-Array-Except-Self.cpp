class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int prod = 1;
        bool has0 = false;
        int count0 = 0;
        bool hasNo0 = true;
        for(int i = 0 ; i  < nums.size() ; i++){
            if(nums[i] != 0){
                prod = prod*nums[i];
                hasNo0 = false;
            }
            else{
                has0 = true;
                count0++;
            }
        }

        if(has0 == false){
            for(int i = 0 ; i<nums.size() ; i++){
                nums[i] = prod/nums[i];
            }
        }
        else{
            if(hasNo0 == true || count0 > 1){
                for(int i = 0 ; i < nums.size() ; i++){
                    nums[i]=0;
                }
            }
            else{
                for(int i = 0 ; i < nums.size() ; i++){
                    if(nums[i] != 0){
                        nums[i] = 0;
                    }
                    else{
                        nums[i] = prod;
                    }
                }
            }
        }
        return nums;
    }
};