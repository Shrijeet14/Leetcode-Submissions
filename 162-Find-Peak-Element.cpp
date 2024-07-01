class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int s =0 ;
        int l =n-1 ;
        int mid = s + (l-s)/2;

        if(s==l){
            return s;
        }

        if(arr[0]>arr[1]){
            return 0;
        }
        if(arr[n-1]> arr[n-2]){
            return n-1;
        }

        while(s <= l){
            if((mid+1 < n)&&( mid-1 >= 0)&&arr[mid] > arr [ mid + 1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            else if((mid+1 < n)&&arr[mid] < arr[mid+1] ){
                s = mid+1;
            }
            else {
                l = mid - 1;
            }
            mid = s + (l-s)/2;
        }
        return -1;
    }
};