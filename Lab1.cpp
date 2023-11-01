//q1
#include <stdio.h>
int main() {
    int emp_id,salary_per_hour=999;
    float hours_worked;
    printf("Enter Employee ID:\t");
    scanf("%d",&emp_id);
    printf("\nEnter total hours worked in this month:\t");
    scanf("%f",&hours_worked);
    printf("The total salary of the Employee(ID = %d): Rs.%.2f/= ",       emp_id, salary_per_hour * hours_worked);
    return 0;
}
//q2
#include <stdio.h>
int main() {
    float height, width;
    printf("Enter Height of the Rectangle:\t");
    scanf("%f",&height);
    printf("\nEnter Width of the Rectangle:\t");
    scanf("%f",&width);
    printf("The Perimeter of the Rectangle: %.2f units",height*2+width*2);
    printf("\nThe Area of the Rectangle: %.2f square units",height*width);
    return 0;
}
//q3
#include <stdio.h>

int main() {
    float height;
    printf("Enter Height of the Person in centimeters:\t");
    scanf("%f",&height);
    if(height<150)
        printf("The Person is DWARF");
    else if(height==150)
        printf("The Person is AVERAGE");
    else if(height>=165)
        printf("The Person is TALL");
    else
        printf("The Person is between DWARF and TALL but not AVERAGE");
    return 0;
}
//q4
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
//q5
#include <stdio.h>
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);
    return 0;
}
