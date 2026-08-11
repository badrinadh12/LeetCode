
bool isPalindrome(int x) {
    int p=0;
    int original=x;
    while(x>0){
        p=p*10 + (x%10);
        x=x/10;

    }
    if(p==original){
        return true;

    }
    else{
        return false;
    }
}