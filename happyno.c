#include <stdio.h>

int isHappyNumber(int num) {
    int sum = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    
    if (sum == 1) {
        return 1;
    } else if (sum == 4) {
        return 0;
    } else {
        return isHappyNumber(sum);
    }
}

int main() {
    printf("2-Digit Happy Numbers:\n");
    
    for (int num = 1; num < 100; num++) {
        if (isHappyNumber(num)) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}
