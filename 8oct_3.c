/*3.	Write a function that accepts pointers as parameters. Pass variables by reference using
 pointers and modify their values within the function.*/

 #include <stdio.h>

void change(int *x, float *y, char *z) {
    *x = *x + 5;
    *y = *y + 2.3;
    *z = *z + 1;
}

int main() {
    int a = 10;
    float b = 4.7;
    char c = 'K';

    printf("Before change:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    change(&a, &b, &c);

    printf("\nAfter change:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}


/*Before change:
a = 10
b = 4.70
c = K

After change:
a = 15
b = 7.00
c = L*/