#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // use time.h header file to use time

void random_number(int random);

int main()
{
    int num, i;
    time_t t1;      // declare time variable

    printf("Enter a number to set the limit for a random number\n");
    scanf("%d", &num);

    // define a random number generator
    srand((unsigned)time(&t1));     // pass the srand() parameter
    printf("\n");       // printf the space

    // generate random number between 0 to 50
    for (i = 0; i < num; i++)
        printf("%d. %d\n", i+1, rand() % 50);

         printf("Enter a number to set the limit for random number\n");
     scanf("%d", &randon_num);

     random_number(randon_num);
}

void random_number(int random)
{
    printf("randon_nember() function called\n");
    time_t t1;
    srand((unsigned)time(&t1));

    // generate random number between 0 to 100
    for(int i = 0; i < random; i++)
        printf("%d. %d\n", i + 1, rand() % 100);

}
