int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    int* array = (int*)malloc(sizeof(int)*ASize);
    int i,j;
    int k =0;
    j = ASize-1;
   for(i=0;i<ASize;i++){
    if(A[i]%2==0)
        array[k++]=A[i];
    else
        array[j--]=A[i];

   }return array;

}
