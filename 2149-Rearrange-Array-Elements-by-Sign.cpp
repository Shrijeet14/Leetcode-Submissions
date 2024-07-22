class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> posEle;
        vector <int> negEle;

        for(int i = 0 ; i <nums.size() ; i++){
            if(nums[i] < 0){
                negEle.push_back(nums[i]);
            }
            else{
                posEle.push_back(nums[i]);
            }
        }
        int pos = 0;
        int neg = 0;

        for(int i =0 ; i < nums.size()  ; i++){
            if(i%2==0){
                if(pos<posEle.size()){
                    nums[i]=posEle[pos];
                    pos++;
                }
            }
            else{
                if(neg<negEle.size()){
                    nums[i]=negEle[neg];
                    neg++;
                }
            }
        }
        return nums;
    }
};