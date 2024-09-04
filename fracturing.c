#include <stdio.h>
#include <math.h>

int main() {



    double calculateDistance();

        // define variables for the points
        int px1 = 0;
        int px2 = 0;
        int py1 = 0;
        int py2 = 0;

        printf("Enter the x value for the first point. \n");
        scanf("%d", &px1);
        printf("Enter the x value for the second point. \n");
        scanf("%d", &px2);
        printf("Enter the y value for the first point. \n");
        scanf("%d", &py1);
        printf("Enter the y value for the second point. \n");
        scanf("%d", &py2);

        printf("Point #1 entered: x1=%d; y1=%d\nPoint #2 entered: x2=%d; y2=%d\nThe distance between the two points is\n", px1, py1, px2, py2);
    return 0; 
}