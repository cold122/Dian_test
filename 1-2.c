#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a,b,c; 
int main()
{
	freopen("a","r",stdin);
	freopen("b","w",stdout);
    scanf("elevator%d%d%d",&c,&a,&b);
    printf("%d 0 0\n",c);
    printf("%d %d 1\n",a,abs(a-c));
    printf("%d %d 0\n",b,abs(a-c)+abs(a-b));
    return 0;
}

