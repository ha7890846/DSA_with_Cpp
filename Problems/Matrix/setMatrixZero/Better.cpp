#include <bits/stdc++.h>
using namespace std;
class Better
{
    public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<bool> row(n, false), col(m, false);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        // final matrix with zeros
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    
    void setZeroes2(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<pair<int, int>> zeros;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    zeros.push_back({i, j});
                }
            }
        }

        // final matrix with zeros
        for(auto zero: zeros){
            int row = zero.first, col = zero.second;
            for(int i = 0; i < m; i++){
                matrix[row][i] = 0;
            }

            for(int i = 0; i < n; i++){
                matrix[i][col] = 0;
            }
        }
    }
};
