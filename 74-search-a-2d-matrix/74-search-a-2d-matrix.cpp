class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int x=0,y=n-1;
        while(x<m && y>=0){
            if(matrix[x][y]==target) return 1;
            else if(matrix[x][y]<target) x++;
            else if(matrix[x][y]>target) y--;
        }
        return 0;
    }
};