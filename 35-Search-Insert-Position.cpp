class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s =0;
        int n= nums.size(); 
        int l= n-1;
        int mid = 0;
        while(s<=l){
            mid = s  + (l-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid] < target){
                s = mid + 1;
            }
            else{
                l = mid - 1;
            } 
        }
        if(target>nums[mid]) return mid+1;
        else{return mid;}

        return 0;
    }
};
