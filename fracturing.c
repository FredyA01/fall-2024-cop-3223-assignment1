#include<stdio.h>
#include<math.h>

double calculatedistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double CalculateHeight();

//Define the value of Pi
#define Pi  3.14159

int main(int agrc, char **argv) {

double calculateDistance();



    return 0;
}


double calculateDistance() {
double x1 = 2, y1 = 4, x2 = 5, y2 = 8;
double dx = x2 - x1;
double dy = y2 - y1;

double distance = (sqrt(pow(dx, 2) + pow(dy, 2)));
printf ("result: %f\n", distance);
return distance;
}