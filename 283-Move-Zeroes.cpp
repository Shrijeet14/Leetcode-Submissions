class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i = 0;
        int j = i+1;
        //new
        while(j<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        
    }
};