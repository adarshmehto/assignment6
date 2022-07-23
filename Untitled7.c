int main()
{
    int n,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    printf("Digits in a number is %d",i);
}
