void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void moveZeroes(int* nums, int numsSize) {
    int p = 0;
    for(int i = 0; i < numsSize; i++){

        if(nums[i] != 0){
            swap(&nums[i],&nums[p]);
            p++;
        }    
    }
}
