#include <stdio.h>

// Draws a circle (head of stick figure)
void draw_circle(void) {
    printf("   *   \n");
    printf(" *   * \n");
    printf("   *   \n");
}

// Draws a triangle (could be used as lower part or decoration)
void draw_triangle(void) {
    printf("    ^   \n");
    printf("   / \\\n");
    printf("  /   \\\n");
    printf(" /     \\\n");
    printf("/-------\\\n");
}

// Main function that calls all drawing functions to form a stick figure
int main(void) {
    printf("\nNow drawing a circle:\n");  
    draw_circle();      // Head
    printf("\nNow drawing a triangle:\n");
    draw_triangle();    // Optional triangle example
    return 0;
}
