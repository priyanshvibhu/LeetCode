int reverse(int x){
    long rev=0;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    x=rev;
    if(rev!=x) return 0;
    return rev;
}