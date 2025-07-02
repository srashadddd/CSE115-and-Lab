#include <stdio.h>
#include <math.h>

float calculateVolume(float, float);
float calculateSurfaceArea(float, float);

int main() {
    float baseLength, height, volume, surfaceArea;

    printf("Enter length of the square base: ");
    scanf("%f", &baseLength);

    printf("Enter height of the pyramid: ");
    scanf("%f", &height);

    volume = calculateVolume(baseLength, height);
    surfaceArea = calculateSurfaceArea(baseLength, height);

    printf("Volume of the square pyramid is: %.2f\n", volume);
    printf("Surface area of the square pyramid is: %.2f\n", surfaceArea);

    return 0;
}

float calculateVolume(float baseLength, float height) {
    float baseArea = baseLength * baseLength;
    return (1.0 / 3.0) * baseArea * height;
}

float calculateSurfaceArea(float baseLength, float height) {
    float baseArea = baseLength * baseLength;
    float slantHeight = sqrt((baseLength / 2) * (baseLength / 2) + height * height);
    float lateralArea = 2 * baseLength * slantHeight;
    return baseArea + lateralArea;
}
