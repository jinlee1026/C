#include <stdio.h>

int main ()

{
    int input;
    char y='Y';
    char n='N';
    char good;
    char inputChacr [5];
    


    printf("Take a guess, what's my favorite color?");
    printf("\n");
    printf("type here : ");
    scanf("%s",&inputChacr);

    printf("\n");
    printf("%s, is this what you think?", inputChacr);
    printf("\n");
    printf("\n");
    printf("please tell me Y or N");
    printf("\n");
    printf("your answer :");
    scanf("%s",&y);
    printf("\n thank you!");

    
    while (y= 'N')
    
    {
        
        printf("\n");
        printf("\n");
        printf("don't lie");
        printf("\n");
        printf("and please try again your answer shold be :");
        scanf("%s",&y);

    }

    
    return 0;

}

