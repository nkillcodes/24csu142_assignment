#include <stdio.h>
#include <math.h>
int main() {
    int num, original_num, rem, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    for (original_num = num; original_num != 0; ++n) {
        original_num /= 10;
    }
    original_num = num;
    for (original_num = num; original_num != 0; original_num /= 10) {
        rem = original_num % 10;
        result += pow(rem, n);
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}            