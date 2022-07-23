int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        if(n%i==0) break;
    if(i==n)
        printf("Prime");
    else
        printf("Non prime");
}
