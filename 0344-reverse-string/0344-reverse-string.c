void reverseString(char* s, int sSize) {
    char *temp = malloc(sSize+1);
    int i;
    *(temp+sSize) = '\0';
    for( i = 0; i < sSize; i++){
        *(temp + sSize - i -1) = s[i];
    }
    for(i = 0; i < sSize; i++){
        *(s + i) = *(temp+i);
    }
}