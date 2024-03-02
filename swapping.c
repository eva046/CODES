#include<stdio.h>
int main()
{
    int a,b;
    printf("Before:\n");
    scanf("%d %d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("AFter:\n");
    printf("a = %d b = %d\n",a,b);
    main();

}
