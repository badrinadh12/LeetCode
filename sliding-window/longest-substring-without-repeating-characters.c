int lengthOfLongestSubstring(char* s) {
    int i,j,k;
    int max=0;
    int start=0;
    int count;
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=i;s[j]!='\0';j++){
            for(k=i;k<j;k++){
                if(s[k]==s[j]){
                    break;
                }
            }

            if(k<j){
                break;
            }
            count++;

        }
        if(count>max){
            max=count;
            start=i;
        }
    }
    return max;

}