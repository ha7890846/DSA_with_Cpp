#include<iostream>
using namespace std;

#include "Bruteforce.cpp"
#include "Better.cpp"
void printMatrix(vector<vector<int>> matrix){
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> matrix2 = {{1,1,0},{1,0,1},{1,1,1}};
    Better obj;
    obj.setZeroes(matrix);
    obj.setZeroes2(matrix2);
    printMatrix(matrix);
    printMatrix(matrix2);
    return 0;
}