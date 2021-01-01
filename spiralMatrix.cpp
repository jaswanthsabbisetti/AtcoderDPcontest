class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int si = 0;
        int sj = 0;
        int ei = matrix.size()-1;
        int m = matrix.size();
        int n = matrix[0].size();
        int ej = matrix[0].size()-1;
        vector<int>ret;
        int count = 0;
        while((si<=ei)&&(sj<=ej))
        {
            for(int i=sj;i<=ej;i++)
            {
                if(count==m*n)break;
                ret.push_back(matrix[si][i]);
                count++;
                if(count==m*n)break;
               
            }
            si++;
            for(int i = si;i<=ei;i++)
            {
                if(count==m*n)break;
                ret.push_back(matrix[i][ej]);
                count++;
                if(count==m*n)break;
            }
            ej--;
            for(int i = ej;i>=sj;i--)
            {
                if(count==m*n)break;
                ret.push_back(matrix[ei][i]);
                count++;
                if(count==m*n)break;
            }
            ei--;
            for(int i=ei;i>=si;i--)
            {
                if(count==m*n)break;
                ret.push_back(matrix[i][sj]);
                count++;
                if(count==m*n)break;
            }
            sj++;
            if(sj>ej || si>ei) break;
        }
        return ret;
    }
};