class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int n = row*column;
        int s = 0;
        int lc = column-1;
        int floor = -1;

        while(s <= lc){
            int mid = s + (lc-s)/2;
            if(matrix[0][mid]==target){
                return (matrix[0][mid]);
            }
            else if(matrix[0][mid] < target){
                floor = mid;
                s = mid + 1;
            }
            else{
                lc = mid - 1;
            }
        }

        for(int i =0 ; i <= floor ; i++){
            int s = 0 ;
            int l = row-1;

            while(s <= l){
                int mid = s + (l-s)/2;
                if(matrix[mid][i] == target){
                    return true;
                }
                else if(matrix[mid][i] < target){
                    s = mid + 1;
                }
                else{
                    l = mid - 1;
                }
            }   
        }

        return false;
    }
};