
   #include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the greatest number
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }

    // Displaying the result
    printf("The greatest number is: %d\n", max);

    
}
     return 0;
}