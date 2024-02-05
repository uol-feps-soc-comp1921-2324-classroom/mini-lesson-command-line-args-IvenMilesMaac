#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    /*
    argv[0] - filename
    argv[1] - number1
    argv[2] - number2
    */

    if (argc != 3) {
        printf("Usage: ./sum <number1> <number2>\n");
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    if (num1 && num2) {
        int sum = num1 + num2;
        printf("Sum: %d\n", sum);
    }
    else {
        printf("Error: Must enter integer numbers\n");
        return 1;
    }

    return 0; // Exit successfully
}
