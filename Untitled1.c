int main()
{
    int i,n,s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("Sum of first %d natural number is %d",n,s);
}
