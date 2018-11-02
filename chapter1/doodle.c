#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

void doodle(int a, int b);
int power(int k, int i);

int main(void)
{
    int x= get_int();
    int y= get_int();
    doodle(x,y);
    printf("%d , %d\n",x,y);
    int pow = power(x,y);
    printf("%d\n", pow);
}

void doodle(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int power(int k, int i)
{
    int pow = k*i;
    return pow;
}