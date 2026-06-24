//to check a number is strong or not
#include <stdio.h>

int main()
 {
    int num, originalNum, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  
    for (; num > 0; num /= 10)
	 {
        digit = num % 10; 
        fact = 1;
        for (i = 1; i <= digit; i++)
		 {
            fact *= i;
        }

        sum += fact;   
    }
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }
}

