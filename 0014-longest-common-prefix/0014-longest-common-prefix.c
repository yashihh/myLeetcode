// prefix 表示從 0th~Nth
// 若發現不同char時將其改成'\0'return
char* longestCommonPrefix(char** strs, int strsSize) {
    int c = 0; // 每個string index
    while(true){
        if(strs[0][c] == '\0'){
            return strs[0];
        }
        for(int i = 1; i < strsSize; i++){
            if(strs[0][c] != strs[i][c]){ // 用第一個string來比較其他的
                strs[0][c] = '\0';
                return strs[0];
            } 
        }
        c++;
    }

}