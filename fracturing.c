// Author: Elayna Gillis
// Date: 09/08/24
// Class: COP3223, Professor Parra 
// Student ID: 5428883
// UCF ID: el186881
// Purpose: The main purpose of this lab is to get used to fracturing code.
// Input: Set of points, x and y,  for each of the five functions.
// Output: Points input by users, and the calculations done in each function. 

#include <stdio.h>
#include <math.h>

//defining the variable PI for Area and Perimeter fucntions.
#define PI 3.14159


//Function that asks user to input points and caclulates a distance value.
double askForUserInput() {

    //defining variables for each point.
    int px1 = 0;
    int px2 = 0;
    int py1 = 0;
    int py2 = 0;

    //Asking for values for each point.
    printf("Enter the x value for the first point: \n");
    scanf("%d", &px1);
    printf("Enter the x value for the second point: \n");
    scanf("%d", &px2);
    printf("Enter the y value for the first point: \n");
    scanf("%d", &py1);
    printf("Enter the y value for the second point: \n");
    scanf("%d", &py2);
    printf("Point #1 entered: x1=%d ; y1=%d\nPoint #2 entered: x2=%d ; y2=%d\n", px1, py1, px2, py2);
        
    // calulations for the distance using the input from the user.
    double x_squared = pow((px2 - px1),2);
    double y_squared = pow((py2 - py1),2);
    double distance = sqrt(x_squared + y_squared);

    return distance;
 }


//Function for distance
double calculateDistance() {     

    //takes in points from askForUserInput Fuction and prints the distance.
    double distance = askForUserInput();
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}


//Function for perimeter.
double calculatePerimeter() {

    //calculates the Perimeter based on the points from input function.
    double perimeter = askForUserInput()*PI;
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2;

}


//Function for Area.
    double calculateArea() {

        //calculates the area based on values from the input function.
        double area = pow((askForUserInput() / 2), 2) * PI;
        printf("The area of the city encompassed by your request is %.2f\n", area);
        return 2;
    }

   
//Fucntion for Witdh.
double calculateWidth() {

    //Prints the width based on the point data from the input function.
    printf("The width of the city encompassed by your request is %.2f\n", askForUserInput());

    return 1;
}


//Function for Height.
double calculateHeight() {

    //Prints the height based on the point data from the input function.
    printf("The height of the city encompassed by your request is %.2f\n", askForUserInput());

    return 1;
}


//Main function that calls all functions above.
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; 
}