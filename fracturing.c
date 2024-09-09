#include<stdio.h>
#include<math.h>

double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea();
double calculateWidth();
double CalculateHeight();

//Define the value of Pi
#define Pi  3.14159

int main(int argc, char **argv) {
    double x1, y1, x2, y2;
  // Prompt user for input
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = calculatePerimeter(distance);
    
    printf("Point #1 entered: (%f, %f)\n", x1, y1);
    printf("Point #2 entered: (%f, %f)\n", x2, y2);
    printf("distance: %f\n", distance);
    printf("circumference: %f\n", perimeter);

    return 0;
}
double calculateDistance(double x1, double y1, double x2, double y2) {

    // Calculation using Distance Formula
    double dx = x2 - x1;
    double dy = y2 - y1;
    double px = pow(dx, 2);
    double py = pow(dy, 2);
    double distance = (sqrt(px+py));

    return distance;
}

double calculatePerimeter(double distance) {

    double radius = distance / 2;
    double perimeter = 2 * Pi * radius;

    return 1.0;
}