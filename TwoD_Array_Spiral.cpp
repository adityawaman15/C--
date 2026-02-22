class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;

        int left = 0;
        int right = n - 1;
        int top = 0;
        int bot = m - 1;

        while(left <= right && top <= bot){

            // Left → Right
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            // Top → Bottom
            for(int i = top; i <= bot; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Right → Left
            if(top <= bot){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }

            // Bottom → Top
            if(left <= right){
                for(int i = bot; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};
