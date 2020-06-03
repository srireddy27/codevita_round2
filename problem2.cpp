#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test_case;
    scanf("%d",&test_case);
    for(int k=0;k<test_case;k++)
    {
        int n;
        scanf("%d",&n);
        int x,y;
        scanf("%d%d",&x,&y);
        long long int min_x=x,max_x=x;
        long long int min_y=y,max_y=y;
        for(int i=1;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            if(x<min_x)
                min_x=x;
            else if(x>max_x)
                max_x=x;
            if(y<min_y)
                min_y=y;
            else if(y>max_y)
                max_y=y;
        }
        long long int side=max_x-min_x;
        if(side<max_y-min_y)
            side=max_y-min_y;
        printf("%lld\n",side*side);
    }
    return 0;
}

