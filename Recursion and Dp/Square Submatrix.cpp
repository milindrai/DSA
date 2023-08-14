//Count Square Submatrices with All ones in a binary matrix

int countSquares(vector<vector<int>>& matrix) {
        int ans=0;
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if (matrix[i][j]==1){
                    matrix[i][j]+=min({matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]});     

//✅Max length of square matrix from this index  ✅(in part of matrix we have traversed i,e upward left part considering cur index to centre of graph paper) 
//✅Max length of square matrix = max squares asscoiated with cur index  (in upward left part considering this is centre of graph paper)
		
                }
            }
        }
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                ans+=matrix[i][j];         // Add all squares associated with each index
	                                  //For max area square submatrix with all ones : ans = max(matrix[i][j], ans);
            }
        }
        return ans;
    }

//matrix[i-1][j] -upper row
//matrix[i][j-1] -previous column
//matrix[i-1][j-1] -diaginal
