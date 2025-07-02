#include <stdio.h>


void draw_circle(void) {
    printf("   *   \n");
    printf(" *   * \n");
    printf("   *   \n");
}

void draw_triangle(void) {
    printf("    ^   \n");
    printf("   / \\\n");
    printf("  /   \\\n");
    printf(" /     \\\n");
    printf("/-------\\\n");
}

int main(void) {
    printf("\nNow drawing a circle:\n");  
    draw_circle();    
    printf("\nNow drawing a triangle:\n");
    draw_triangle();   
    return 0;
}
