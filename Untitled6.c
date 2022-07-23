int main()
{
    int n,s=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(n;n>=1;n--)
        s=s*n;
    printf("Factorial is %d",s);
}
