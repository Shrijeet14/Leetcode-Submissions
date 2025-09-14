class Solution {
public:
    void sortColors(vector<int>& nums) {

        int left =0;
        int right = nums.size()-1;
        int i = 0;
        while(i<= right){//=> Because right side will be anyhow 2 only so no ne=ed to further check
            if(nums[i]==0){
                swap(nums[left] , nums[i]);
                left++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[right] , nums[i]);
                right--;
                // i++;  ====> Because we don't know whether the replaced value is 0 or 1 or 2;
            }
            else{
                i++;
            }
        }
    }
};