int main()
{
    int x,y=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x=x/10;
    }
    printf("Reverse of number is %d",y);
}
