#include <stdio.h>

/* Algorithm will spit out incorrect results for calcultations that exceed integer limit! */
int power_number_even(int n , int power)
{
    if(power==0)
        return 1;
    if(power==2)
        return n*n;
    else
        return power_number_even(n,power/2) * power_number_even(n,power/2);

}

int power_number_odd(int n , int power)
{
    if(power==0)
        return 1;
    if(power==1)
        return n;
    else if(power==2)
        return n*n;
    else
        return power_number_odd(n,(power+1)/2) * power_number_odd(n,power/2);

}


int main()
{
    int number, power;

    printf("Enter the number:\n");

    scanf("%d",&number);

    printf("Enter the power:\n");

    scanf("%d",&power);

    if(number%2==0) /* Even */
        printf("The powered number is %d\n", power_number_even(number,power));
    else /* Odd */
        printf("The powered number is %d\n", power_number_odd(number,power));

}
