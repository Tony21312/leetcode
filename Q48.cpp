class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int* temp = new int[matrix.size() * matrix.size()]();
        for(int i = 0, k = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix.size(); j++, k++)
                temp[k] = matrix[i][j];
        
        for(int i = matrix.size() - 1, k = 0; i >= 0; i--)
            for(int j = 0; j < matrix.size(); j++, k++)
                matrix[j][i] = temp[k];
    }
};
