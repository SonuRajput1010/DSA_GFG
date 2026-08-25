class Solution {
    public boolean func(int[][]mat, int k, int target){
        
        int m = mat.length;
        int n = mat[0].length;

        int row = m - 1;
        int col = 0;

        int cnt = 0;

        while(row >= 0 && col < n){
            if(mat[row][col] > target) {
                row--;
            }
            else {
                cnt += row + 1;
                col++;
            }
        }

        return cnt >= k;
    }
    public int kthSmallest(int[][] mat, int k) {
        // code here
        int m = mat.length;
        int n = mat[0].length;

        int low = mat[0][0];
        int high = mat[m - 1][n - 1];

        for(int i = low; i <= high; i++) {

            if(func(mat, k, i)) {
                return i;
            }
        }

        return -1;
        
    }
}
