#include <stdio.h>

float convert(float);

int main()
{
    float celcius, result;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &celcius);

    result = convert(celcius);

    printf("Temperature in Fahrenheit is: %f\n", result);

    return 0;
}

float convert(float celcius) {
    return ((celcius * 9) / 5) + 32;
}
