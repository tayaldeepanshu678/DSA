class Solution {
public:
    int find_row(vector<vector<int>>&mat, int col){
        int max_ele = -1;
        int n = mat.size();
        int idx = -1;
        for(int i = 0; i<n; i++){
            if(mat[i][col]>max_ele){
                max_ele = mat[i][col];
                idx = i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            int max_row = find_row(mat,mid);
            int left = mid-1>=0? mat[max_row][mid-1]:-1;
            int right = mid+1<m? mat[max_row][mid+1]:-1;
            if(mat[max_row][mid]>left && mat[max_row][mid]>right){
                return {max_row,mid};
            }
            else if(mat[max_row][mid]<left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};