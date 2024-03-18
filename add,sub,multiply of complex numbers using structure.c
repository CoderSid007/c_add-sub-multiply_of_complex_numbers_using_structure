#include <stdio.h>

struct Complex {
    float real; 
    float imag;
};

struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real; 
    result.imag = num1.imag + num2.imag; 
    return result;
}


struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real; 
    result.imag = num1.imag - num2.imag; 
    return result;
}

struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag; 
    result.imag = num1.real * num2.imag + num1.imag * num2.real; 
    return result;
}

int main() {
    struct Complex num1, num2, result;

   
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.real); 
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.imag); 

    
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.real); 
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.imag); 
  
    result = add(num1, num2);
    printf("Addition: %f + %fi\n", result.real, result.imag);

    
    result = subtract(num1, num2);
    printf("Subtraction: %f + %fi\n", result.real, result.imag);

    
    result = multiply(num1, num2);
    printf("Multiplication: %f + %fi\n", result.real, result.imag);

    return 0;
}