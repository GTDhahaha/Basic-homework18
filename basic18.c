#include <stdio.h>
#include<stdlib.h>

int main() {
    int num = 0, i = 0;
    printf("Please enter an integer:");
    scanf("%d", &num);
    int array[10] = {};
    while(num) {
        array[num % 10]++;  
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (array[i] != 0)
            printf ("%d=%d\n", i, array[i]);}
    return 0;
}
