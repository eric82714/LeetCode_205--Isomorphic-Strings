bool isIsomorphic(char * s, char * t){
    int key[128] = {0}, value[128] = {0};
        
    for(int i = 0; i < strlen(s); i++) {
        if(key[s[i]] != value[t[i]]) return false;
        key[s[i]] = i + 1;
        value[t[i]] = i + 1;
    }
    return true;
}
