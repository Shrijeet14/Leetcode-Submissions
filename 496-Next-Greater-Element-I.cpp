class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        map<int,int> mp;
        for(int i=nums2.size()-1; i >= 0 ; i--){
            mp[nums2[i]] = i;
            while(!st.empty() && nums2[i] >= st.top()){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        vector<int> ansSheet;

        for(int i = 0 ; i < nums1.size() ; i++){
            ansSheet.push_back(ans[nums2.size()-1-mp[nums1[i]]]);
        }
        return ansSheet;
    }
};

