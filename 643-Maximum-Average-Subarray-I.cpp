class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double max = INT_MIN;
        // for(int i = 0 ; i < nums.size()-k+1 ; i++){
        //     double sum = 0;
        //     for(int j=i ; j<k+i ; j++){
        //         sum = sum + nums[j];
        //     }
        //     double avg = sum/k;
        //     if(avg>max){
        //         max=avg;
        //     }
        // }
        // return max;

        double max_avg =0;
        double max_sum =0;
        for(int i=0;i<k;i++){
            max_sum = max_sum + nums[i];
        }
        max_avg = max_sum/k;
        
        for(int i =1; i < nums.size()-k+1 ; i++){
            max_sum = max_sum + nums[i+k-1]-nums[i-1];            
            if(max_avg < max_sum / k){
                max_avg = max_sum/k;
            }
        }
        return max_avg;
    }
};