class Solution {
public:
    int findPivot(vector<int>& nums){
        int n = nums.size();
        int l = n -1;
        int s =0;

        while(s <= l){
            int mid = s + (l-s)/2;
            if(s==l){
                if(s == n-1){
                    return 0;
                }
                return s;
            }
            else if((mid-1>=0)&&(nums[mid] < nums[mid-1])){
                return mid;
            }
            else if((mid+1<n)&&(nums[mid] > nums[mid+1])){
                return mid+1;
            }
            else if(nums[mid] < nums[0]){
                l = mid -1;
            }
            else{
                s = mid + 1;
            }
        }
        return -1;
    }

    int findMin(vector<int>& nums) {
        int pivotIndex = findPivot(nums);
        return nums[pivotIndex];
    }
};