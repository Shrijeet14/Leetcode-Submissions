class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        stack <int> st_back;
        for(int i = nums.size()-1 ; i >=0  ; i--){
            while(!st_back.empty() && nums[i] >= st_back.top()){
                st_back.pop();
            }
            if(st_back.empty()){
                bool flag = false;
                for(int j = 0 ; j <i ; j++){
                    if(nums[i] < nums[j]){
                        ans.push_back(nums[j]);
                        flag = true;
                        break;
                    }
                }
                if(flag == false){
                    ans.push_back(-1);
                }
            }
            else{
                ans.push_back(st_back.top());
            }
            st_back.push(nums[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};