//#define LOCAL
#include <stdio.h>

int main() {
//    printf("Hello, World!\n");

#ifdef LOCAL

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

#endif

    int  x,n=0,min,max,s=0;
    while ( scanf("%d",&x) == 1 )
    {
        s += x ;
        if( x<min ) min = x ;
        if( x>max ) max = x ;
//        printf("%d",x);
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    return 0;
}