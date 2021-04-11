
#include <stdio.h>

int main()
{

char inputChar;
int input;

printf("pick a number from 0 to 10 please.\n");
printf("insert : ");
scanf("%d",&input);

printf("\n--------------------------");
printf("\nI want you to confirm, ");
printf ("is this your number? --> %d\n",input);

printf("choose Y or N");
printf("\n");
printf("insert : ");

scanf(" %c",&inputChar);
while
{
    
}

if(inputChar == 'Y' || inputChar == 'y')
{
    printf("Good!");
    printf("\n");

}
else if(inputChar=='N' || inputChar=='n')
{
    printf("don't lie!");
    printf("\n");
}
else
{
    printf("try again!");
    printf("\n");
}

printf("thank you for confirming:)\n");

return 0;

}