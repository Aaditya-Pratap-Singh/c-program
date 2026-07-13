<<<<<<< HEAD
#include <stdio.h>
int fab(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fab(n - 1) + fab(n - 2);  
}

int main() 
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d\t", fab(i));
    }
    return 0;
}

=======
#include <stdio.h>
int fab(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fab(n - 1) + fab(n - 2);  
}

int main() 
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d\t", fab(i));
    }
    return 0;
}

>>>>>>> a3b3a9cd7e3d97dc3357f9b679ba91d9f1a3bec6
