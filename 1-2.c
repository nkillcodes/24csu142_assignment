//WAP to read two integers and print their HCF (Highest Common Factor).
#include <stdio.h>
int findHCF(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}