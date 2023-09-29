#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    // It returns the same sequence of random number on every execution of the program

    printf("Random numbers are:\n");
    for(int i = 0; i < 5; i++)
        printf("%d\n", rand());

    return 0;
}

/*
    As we can see in the above output, it returns the s
    ame sequence of random numbers on every execution
    of the oragramming code
**/

/// Metehan GENCER
