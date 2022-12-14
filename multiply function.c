//re --> result
//m matrix1
//n matrix2
// r1, r2 dimensions

void multiply int(m[r1][r2], int n[r1][r2], re[r1][r2])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            re[i][j] = 0;   //set initial value to zero 
            
            for(int k = 0; k < n; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}
