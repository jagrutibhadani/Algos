#include <stdio.h>

/* Algorithm will spit out incorrect results for calcultations that exceed integer limit! */
int power_number(int n , int power)
{
    int result;

    if(power==0)
        return 1;
    if(power==1)
        return n;
    else if(power%2==0)  /* Even */
    {
        result = power_number(n,power/2);
        return result*result;
    }
    else                /* Odd */
    {
        result = power_number(n,(power-1)/2);
        return n*result*result;
    }

}

int main()
{
    int n, power;

    printf("Enter the number:\n");

    scanf("%d",&n);

    printf("Enter the power:\n");

    scanf("%d",&power);

    printf("The powered number is %d\n", power_number(n,power));

}
