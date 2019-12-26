int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){
    *returnSize = ASize;
    int ColSize = *AColSize;
    *returnColumnSizes = (int*)malloc(sizeof(int)*ASize);
    int** result =(int**)malloc(sizeof(int*)*ASize);
    for(int i = 0 ; i<ASize;i++){
        result[i]=(int*)malloc(sizeof(int)*ColSize);
        (*returnColumnSizes)[i]= ColSize;
        for(int j = 0 ; j< *AColSize ;j++){
           A[i][j]=!A[i][j];
            result[i][ColSize-j-1]=A[i][j];
        }
    }
    return result;
}