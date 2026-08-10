
int removeDuplicates(int* nums, int numsSize) {
    int x=0;

    for(int i=1;i<numsSize;i++){
        if(nums[i]!=nums[x]){
            x=x+1;
            nums[x]=nums[i];
        }
    }  
    return x+1;  
}