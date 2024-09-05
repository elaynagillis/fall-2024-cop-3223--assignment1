// Elayna Gillis
// Student ID: 5428883
// UCF ID: el186881

#include <stdio.h>
#include <math.h>

int main(void) 
{
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
        double x_squared = pow((px2 - px1),2);
        double y_squared = pow((py2 - py1),2);
        double distance = sqrt(x_squared + y_squared);
        printf("Point #1 entered: x1=%d; y1=%d\nPoint #2 entered: x2=%d; y2=%d\nThe distance between the two points is %.2f\n", px1, py1, px2, py2, distance);
        

    double calculatePerimeter();
        double PI = 3.14159;
        double perimeter = (PI * 2 * distance);
        printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
        
    
    double calculateArea();
        double radius_squared = pow(distance / 2, 2);
        double area = (PI * radius_squared);
        printf("The area of the city encompassed by your request is %.2f\n", area);
        

    double calculateWidth();
        printf("The width of the city encompassed by your request is %.2f\n", distance);
        

    double calculateHeight();
        printf("The height of the city encompassed by your request is %.2f\n", distance);
        
    
    return 0; 
}