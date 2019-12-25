int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int* result = (int*)malloc(sizeof(int)*2);
    *returnSize  = 2;
    int i = 0 ;
    int j = numbersSize-1;
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            result[0]=i+1;
            result[1]=j+1;
            return result ;
        }else if(numbers[i]+numbers[j]>target)
            j--;
            else
                i++;
    }return result ;
}
