#include<stdio.h>

void test()
{
    static int a=10;
    printf("a= %d",a);
    a++;
}

int main()
{
    test();
    test();

    return 0;
}