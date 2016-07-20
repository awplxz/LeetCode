class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        if(numRows==0)
            return res;
        int i = 0;
        while(i<numRows){
            res[i].resize(i+1);
            for(int j = 0;j<=i;j++){
                if(j == 0 || i == j)
                    res[i][j]=1;
                else
                    res[i][j] = res[i-1][j-1]+res[i-1][j];
            }
            i++;
        }
        return res;
    }
};