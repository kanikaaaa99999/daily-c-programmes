/*2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types.
 Observe how the memory addresses change and the effects on data access.*/

 #include <stdio.h>

int main() {
    int a = 10;
    float b = 4.7;
    char c = 'K';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Before increment:\n");
    printf("p1 points to %p, value: %d\n", p1, *p1);
    printf("p2 points to %p, value: %.2f\n", p2, *p2);
    printf("p3 points to %p, value: %c\n", p3, *p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter increment:\n");
    printf("p1 points to %p\n", p1);
    printf("p2 points to %p\n", p2);
    printf("p3 points to %p\n", p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter decrement (back to original places):\n");
    printf("p1 points to %p, value: %d\n", p1, *p1);
    printf("p2 points to %p, value: %.2f\n", p2, *p2);
    printf("p3 points to %p, value: %c\n", p3, *p3);

    return 0;
}


/*
Before increment:
p1 points to 0061FF10, value: 10
p2 points to 0061FF0C, value: 4.70
p3 points to 0061FF0B, value: K

After increment:
p1 points to 0061FF14
p2 points to 0061FF10
p3 points to 0061FF0C

After decrement (back to original places):
p1 points to 0061FF10, value: 10
p2 points to 0061FF0C, value: 4.70
p3 points to 0061FF0B, value: K
*/