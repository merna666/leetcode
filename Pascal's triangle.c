int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int **result = calloc(numRows,sizeof(int*));
    *returnSize = numRows;
    *returnColumnSizes = calloc(numRows,sizeof(int));
    if(numRows <= 0)
        return result;
    for(int i = 0; i<numRows ;i++){
        result[i]=calloc(i+1,sizeof(int));
        (*returnColumnSizes)[i]= i+1;
        result[i][0]=1;
        for(int j = 1;j<i;j++){
            result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
        result[i][i]=1;
    }
    return result;
}