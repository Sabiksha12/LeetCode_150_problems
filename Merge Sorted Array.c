void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int s=m;
    for(int i=0;i<n;i++){
        nums1[s++]=nums2[i];
    }
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(nums1[j]>nums1[j+1]){
                int temp=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        printf("%d ",nums1[i]);
    }
}
