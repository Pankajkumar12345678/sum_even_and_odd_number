#include <stdio.h>
#include<conio.h>
 
main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
		printf("even no=%d\n",i);
            even_sum = even_sum + i;
        }
        else
        {
		printf("odd number=%d\t\t\n",i);
        odd_sum = odd_sum + i;
        }
    }
    
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
    //getch();
    return 0;
}
