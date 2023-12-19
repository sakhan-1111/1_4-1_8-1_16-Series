#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j=4,r=0;

    for(i=1; i<=10; i++)
    {
        printf("1/%d +",j);
        j=2*j;
    }
    return 0;
}
