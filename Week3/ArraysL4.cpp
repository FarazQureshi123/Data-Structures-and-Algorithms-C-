#include<iostream>
using namespace std;

int main(){
//      vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int rowsInOriginalArray = matrix.size();
//         int colsInOriginalArray = matrix[0].size();

//         // transpose -> row gets converted into columns
//         // cols get converted into rows

//         int rowsOftransposeMatrix = colsInOriginalArray;
//         int colsOfTransposeMatirx = rowsInOriginalArray;

// vector<vector<int>>transpose(rowsOftransposeMatrix,vector<int>( colsOfTransposeMatirx,0));

//   for(int i = 0; i < rowsOftransposeMatrix; i++){
//     for(int j = 0; j < colsOfTransposeMatirx; j++){
//         transpose[i][j] = matrix[j][i];
//     }
//   }

//   return transpose;
//     }
//     return 0;

}

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = m-1;

        vector<int>ans;
        //logic - loop-> if there are any pending elements to print
        // if yes, -> 4steps -> startingRow print,endingCol print, endingRow print, Starting col print

        while(startingRow <= endingRow && startingCol <= endingCol){
            //starting rowprint

            for(int col = startingCol; col <= endingCol; col++){
                ans.push_back(matrix[startingRow][col]);
            }
            startingRow++;

            //ending Col
            for(int row=startingRow; row <= endingRow; row++){
                ans.push_back(matrix[row][endingCol]);
            }
            endingCol--;

            //ending row print
            if(startingRow <= endingRow){
                
            for(int col = endingCol; col >= startingCol; col--){
                ans.push_back(matrix[endingRow][col]);
            }
            }
            endingRow--;
            //startingCol print
            if(startingCol <= endingCol){
            for(int row = endingRow; row >= startingRow; row--){
                ans.push_back(matrix[row][startingCol]);
            }
            }
            startingCol++;

        }
        return ans;
    }
};