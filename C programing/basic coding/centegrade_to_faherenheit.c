#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print the result
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
