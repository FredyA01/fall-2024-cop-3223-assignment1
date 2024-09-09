#include<stdio.h>
#include<math.h>

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double CalculateHeight();

//Define the value of Pi
#define Pi  3.14159

int main(int argc, char **argv) {

double distance = calculateDistance();
printf("result: %f\n", distance);


    return 0;
}
double calculateDistance() {
double x1, x2, y1, y2;
    // Prompt user for input
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
double dx = x2 - x1;
double dy = y2 - y1;
double px = pow(dx, 2);
double py = pow(dy, 2);
double distance = (sqrt(px+py));
return distance;
}