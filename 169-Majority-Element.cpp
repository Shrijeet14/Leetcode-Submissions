class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> key;
        vector<int> value;
        pair<vector<int> , vector<int>> table = make_pair(key , value);
        sort(nums.begin() , nums.end());
        int indexSec = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0){
                table.first.push_back(nums[i]);
                table.second.push_back(1);
            }
            else if(i>0 && nums[i] != nums[i-1]){
                table.first.push_back(nums[i]);
                table.second.push_back(1);
                indexSec++;
            }
            else{
                table.second[indexSec]++;
            }
        }
        int majorityNum = (nums.size())/2;

        for(int i=0 ; i < table.first.size() ; i++){
            if(table.second[i]>majorityNum){
                return table.first[i];
            }
        }
        return -1;
    }
};