#include <stdio.h>

int main()

{
    int age = 29;
    float weight;
    char letter_grade = 'A';

    weight = 50.5;

    
    printf("I am %d years old\n", age);
    printf("I am %.1f kg \n", weight);
    printf("I got a(n) %C\n",letter_grade);

    return 0;

}