
void multiply int(m[n][n], int n[n][n], re[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            re[i][j] = 0;   //set initial value to zero 
            for(int k = 0; k < n; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}
