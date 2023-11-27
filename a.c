#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int lowerLimit, upperLimit;
    
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    
    printf("Numbers divisible by the sum of their digits within the given range are:\n");
    
    for (int num = lowerLimit; num <= upperLimit; num++) {
        int digitSum = sumOfDigits(num);
        if (digitSum != 0 && num % digitSum == 0) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}