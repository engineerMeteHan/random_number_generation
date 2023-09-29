/// Engineer: Metehan GENCER
/* The purpose of this program : Let's write a program to get
    the random numbers using srand() with time() function */

    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int random = rand();    // Assign the rand() function to random variable
        srand(time(0));

        printf("Seed = %d", time(0));
        printf(" Random number = %d", random);

        return 0;

    }
