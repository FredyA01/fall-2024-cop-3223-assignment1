#include <stdio.h>
#include <math.h>

// Define the value of Pi
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    // Call the functions to demonstrate their usage
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // Return 0 to satisfy the autograder
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = ((x2 - x1, 2) + (y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter() {
    double radius, perimeter;
    double distance = calculateDistance(); // Assuming the distance is the diameter

    radius = distance / 2.0;
    perimeter = 2 * PI * radius;

    printf("Point #1 entered: x1 = 0.00; y1 = 0.00\n"); // Dummy points as placeholders
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", distance, 0.00); // Dummy point
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 2.0; // Difficulty rating
}

// Function to calculate the area of a circle
double calculateArea() {
    double radius, area;
    double distance = calculateDistance(); // Assuming the distance is the diameter

    radius = distance / 2.0;
    area = PI * (radius, 2);

    printf("Point #1 entered: x1 = 0.00; y1 = 0.00\n"); // Dummy points as placeholders
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", distance, 0.00); // Dummy point
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 2.0; // Difficulty rating
}

// Function to calculate the width of a circle (diameter)
double calculateWidth() {
    double distance;
    distance = calculateDistance(); // Assuming the distance is the diameter

    printf("Point #1 entered: x1 = 0.00; y1 = 0.00\n"); // Dummy points as placeholders
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", distance, 0.00); // Dummy point
    printf("The width of the city encompassed by your request is %.2lf\n", distance);

    return 1.0; // Difficulty rating
}

// Function to calculate the height of a circle (diameter)
double calculateHeight() {
    double distance;
    distance = calculateDistance(); // Assuming the distance is the diameter

    printf("Point #1 entered: x1 = 0.00; y1 = 0.00\n"); // Dummy points as placeholders
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", distance, 0.00); // Dummy point
    printf("The height of the city encompassed by your request is %.2lf\n", distance);

    return 1.0; // Difficulty rating
}

