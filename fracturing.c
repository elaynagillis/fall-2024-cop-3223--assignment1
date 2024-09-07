// Elayna Gillis
// Student ID: 5428883
// UCF ID: el186881

#include <stdio.h>
#include <math.h>

#define PI 3.14159

 double askForUserInput() {
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
        printf("Point #1 entered: x1=%d ; y1=%d\nPoint #2 entered: x2=%d ; y2=%d\n", px1, py1, px2, py2);
        

        double x_squared = pow((px2 - px1),2);
        double y_squared = pow((py2 - py1),2);
        double distance = sqrt(x_squared + y_squared);

        return distance;
    }

   double calculateDistance() {        
        double distance = askForUserInput();
        printf("The distance between the two points is %.2f\n", distance);
        return distance;
    }

    double calculatePerimeter() {
        double perimeter = askForUserInput()*PI;
        printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
        return 2;
    }

    double calculateArea() {
        double area = pow((askForUserInput() / 2), 2) * PI;
        printf("The area of the city encompassed by your request is %.2f\n", area);
        return 2;
    }

   

    double calculateWidth() {
        printf("The width of the city encompassed by your request is %.2f\n", askForUserInput());
        return 1;
    }

    double calculateHeight() {
       printf("The height of the city encompassed by your request is %.2f\n", askForUserInput());
       return 1;
    }


int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; 
}