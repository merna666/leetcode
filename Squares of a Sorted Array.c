int* sortedSquares(int* A, int ASize, int* returnSize){
    int i = 0 ;
int k = ASize-1;
int j=ASize-1;
int *result = (int*)malloc(sizeof(int)*ASize);
while(i<=j){
    if(abs(A[i])<abs(A[j])){
       result[k--] = A[j]*A[j];
       j--;
      } else{
        result[k--] = A[i]*A[i];
        i++;
      }
}
    *returnSize=ASize;
    return result ;

}