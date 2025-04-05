/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    *returnSize = 0;
    if(numsSize == 0)   return NULL;
    char **ans = (char **)malloc(20*sizeof(char *));
    int start = 0;

    for(int i = 1; i <= numsSize; i++){

        if(i == numsSize || nums[i] != nums[i-1] + 1){ //跑到最後 或是 i th 與 i-1 th 不連續 

            ans[(*returnSize)] = (char *)malloc(25*sizeof(char));
            if(nums[start] == nums[i-1]){
                sprintf(ans[(*returnSize)],"%d",nums[start]);
            }else{
                sprintf(ans[(*returnSize)],"%d->%d",nums[start],nums[i-1]);
            }
            start = i;
            (*returnSize)++;
        }
        
    }

    return ans;
}