
// Method - 2 : using stack & circular array concept.
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        stack <int> st_back;
        for(int i = 2*(n)-1 ; i >=0  ; i--){
            int i_new = i%n;
            while(!st_back.empty() && nums[i_new] >= st_back.top()){
                st_back.pop();
            }
            if(i < n){
                if(st_back.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st_back.top());
                }
            }
            
            st_back.push(nums[i_new]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};