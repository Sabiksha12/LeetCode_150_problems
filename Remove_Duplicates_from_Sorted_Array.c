int removeDuplicates(int* nums, int n) {
    int k=1;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            nums[k++]=nums[i];
        }
        
    }
    return k;
}
