#include <stdio.h>
#include <stdlib.h>

int main(){
    int sayi;
    int random;
    sayi = 5 + rand() % 16;
    printf("%d\n" , sayi);

    random = rand();

    printf("%d\n", random);
    printf("random: %d\n", rand());
    return 0;
}
