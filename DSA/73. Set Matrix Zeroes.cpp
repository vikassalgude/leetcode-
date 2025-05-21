class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row(matrix.size(),1);
        vector<int>column(matrix[0].size(),1);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row[i]=0;column[j]=0;
                }
            }
        }
        for(int i=0;i<row.size();i++){
            if(row[i]==0){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<column.size();i++){
            if(column[i]==0){
                for(int j=0;j<matrix.size();j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};
