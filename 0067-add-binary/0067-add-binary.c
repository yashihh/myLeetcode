char* addBinary(char* a, char* b) {
    int i = strlen(a)-1;
    int j = strlen(b)-1;
    int len = (i > j ? i : j)+1;
    char *ans = (char *)malloc(len + 2);
    ans[len+1] = '\0';
    int carry = 0;
    while(len >= 0){
        int a_bit = (i >= 0) ? (a[i] - '0') : 0;
        int b_bit = (j >= 0) ? (b[j] - '0') : 0;

        ans[len--] = (carry + a_bit + b_bit) %2 + '0';

        if (carry + a_bit + b_bit >= 2){
            carry = 1;
        }else{
            carry = 0;
        }

        i--;
        j--;
    }

    if (ans[0] == '0' && ans[1] != '\0') {
        return ans + 1; // 將指標往後移一格
    } else {
        return ans;
    }  
}