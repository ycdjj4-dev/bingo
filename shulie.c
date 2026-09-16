#include<stdio.h>
int main()
{
    long long int i,j,n;
    printf("«Î ‰»Î£∫");
    scanf("%lld",&n);
    int a[n];
    a[0]=1;
    a[1]=1;
    for(i=0;i<n;i++)
    {
        a[i+2]=a[i+1]+a[i];
        printf("%lld\t",a[i]);
        if(i%5==0&&i!=0)
        {
            printf("\n");
        }
    }
    return 0;
}