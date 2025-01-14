class NumMatrix {
private:
    vector<vector<int>> p; 

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0) return;
        int n = matrix[0].size();
        p.resize(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; ++j) {
                int top = (i > 0) ? p[i - 1][j] : 0;
                int left = (j > 0) ? p[i][j - 1] : 0;
                int topLeft = (i > 0 && j > 0) ? p[i - 1][j - 1] : 0;
                p[i][j] = top + left - topLeft + matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = p[row2][col2];
        int top = (row1 > 0) ? p[row1 - 1][col2] : 0;
        int left = (col1 > 0) ? p[row2][col1 - 1] : 0;
        int topLeft = (row1 > 0 && col1 > 0) ? p[row1 - 1][col1 - 1] : 0;
        return total - top - left + topLeft;
    }
};
