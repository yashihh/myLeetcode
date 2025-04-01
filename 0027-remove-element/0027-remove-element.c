void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int removeElement(int* nums, int numsSize, int val) {
    int p = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            swap(&nums[i], &nums[p]);
            p++;
        }
    }
    return p;
}