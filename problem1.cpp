#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int sum=0;
        int mi;
        scanf("%d",&mi);
        int f=-1;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>=mi)
            {
                f=i+1;
                break;
            }
        }
        printf("%d\n",f);
    }
    return 0;
}
