class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int s = 0;
        int l = c-1;

        while(s<r && l >= 0){

            if(matrix[s][l]==target){
                return true;
            }
            else if(matrix[s][l] < target){
                s++;
            }
            else{
                l--;
            }
        }
        return false;
    }
};