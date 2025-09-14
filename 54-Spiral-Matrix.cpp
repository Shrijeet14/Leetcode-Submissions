// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& arr) {
//         vector<int> ans;
//         int i = 0, j = 0, si = 0, sj = 0, ei = arr.size()-1, ej = arr[0].size()-1;
//         while (si < ei || sj < ej) {
//             while (j < ej) {
//                 ans.push_back(arr[i][j]);
//                 j++;
//             }
//             ej--;
//             while (i < ei) {
//                 ans.push_back(arr[i][j]);
//                 i++;
//             }
//             ei--;
//             while (j > sj) {
//                 ans.push_back(arr[i][j]);
//                 j--;
//             }
//             sj++;
//             while (i > si) {
//                 ans.push_back(arr[i][j]);
//                 i--;
//             }
//             si++;

//             i++;
//             j++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int i = 0, j = 0, si = 0, sj = 0, ei = arr.size() - 1, ej = arr[0].size() - 1;
        
        while (si <= ei && sj <= ej) {  
            while (j <= ej) {    
                ans.push_back(arr[i][j]);
                j++;
            }
            j--;  
            i++;
            si++;  
            
            while (i <= ei) {         
                ans.push_back(arr[i][j]);
                i++;
            }
            i--; 
            j--;
            ej--;  
            
            if (si <= ei) {             
                while (j >= sj) {
                    ans.push_back(arr[i][j]);
                    j--;
                }
                j++; 
                i--;
                ei--; 
            }
            
            if (sj <= ej) {          
                while (i >= si) {
                    ans.push_back(arr[i][j]);
                    i--;
                }
                i++;  
                j++;
                sj++;
            }
        }
        
        return ans;
    }
};
