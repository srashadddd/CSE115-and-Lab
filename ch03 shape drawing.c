#include <stdio.h>

// Draws a circle (head of stick figure)
void draw_circle(void) {
    printf("   *   \n");
    printf(" *   * \n");
    printf("   *   \n");
}

// Draws intersecting lines (body and arms)
void draw_intersect(void) {
    printf("  / \\\n");  // Use double \\ for single backslash
    printf(" /   \\\n");
    printf("/     \\\n");
}

// Draws a base line (used at bottom or for triangle base)
void draw_base(void) {
    printf("-------\n");
}

// Draws a triangle (could be used as lower part or decoration)
void draw_triangle(void) {
    draw_intersect();
    draw_base();
}

// Main function that calls all drawing functions to form a stick figure
int main(void) {
    draw_circle();      // Head
    draw_intersect();   // Body/arms
    draw_base();        // Legs base
    printf("\nNow drawing a triangle:\n");
    draw_triangle();    // Optional triangle example
    return 0;
}
