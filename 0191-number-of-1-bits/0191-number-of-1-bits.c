int hammingWeight(int n) {
    int count = 0;
    while(n){ 
        n &= n-1; //將最低位的1變成0
        count++;
    }
    return count;
}