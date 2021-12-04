// •	Find lcm of two numbers using recursion.
#include<stdio.h>
int main()
{
    int a, b, lcm;
    printf("\n\nEnter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b, lcm);
    return 0;
}

{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}