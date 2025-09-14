class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int n = rows*cols;
        int s =0 ;
        int l =n-1;
        int mid = s + (l-s)/2;
        while(s <= l){
            int i = mid/cols;
            int j = mid%cols;

            if(target == matrix[i][j]){
                return true;
            }
            else if (target > matrix[i][j]){
                s = mid+1;
            }
            else{
                l = mid-1;
            }
            mid = s + (l-s)/2; 
        }
        return false;
    }
};