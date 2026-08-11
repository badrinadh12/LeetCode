
int searchInsert(int* nums, int numsSize, int target) {
    int x;    
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            x=i;
            break;
        }
        else if(nums[i]>target){
            x=i;
            break;
        }
    }
    return x;
    
}