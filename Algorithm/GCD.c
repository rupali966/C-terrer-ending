
﻿#include<stdio.h>
int gcd(int u, int v)
{
    // hare we calculate the greatest common diviser
    
    int t;
    while(u < v)
    {
        if(u < v)
        {
            t = u; u = v; v = t;
        }
        u = u - v;
    }
    return v;
}
int main()
{
    int x, y;
    printf("Enter 2 integer number = ");
    while(scanf(" %d %d",&x, &y) != EOF)
    if(x > 0 && y > 0)
    {
        printf("x = %d y = %d \n Great Common Diviser  = %d \n", x,y,gcd(x, y));
    }
    return 0;
}
// the complexity of time may for above algorithem
// is O(log(max(a,b)))
