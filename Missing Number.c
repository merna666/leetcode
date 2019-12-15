

int missingNumber(int* nums, int numsSize){
    int i , expected ;
    int result =0; 
    int sum = 0;
    for (i=0 ; i<numsSize ; i++)
    {
       sum+= nums[i];
     }
    expected = numsSize*(numsSize+1)/2;
    result = expected - sum ;
    return result ;

}
