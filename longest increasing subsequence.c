int lengthOfLIS(int* nums, int numsSize){
        int i,j;
    int max = 0;
    if(numsSize<=0)
        return 0 ;
    else{
    int arr[numsSize];
    arr[0]=1;
    for(i=1;i<numsSize;i++){
        arr[i]=1;
        for(j=0;j<i;j++){
            if(nums[i]>nums[j] && arr[i]<arr[j]+1){
                arr[i]=arr[j]+1;
            }
        }
    }
    max = arr[0];
    for(i=1;i<numsSize;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }}
    return max;

}

