#include<stdio.h>
#include<math.h>
int main ()
{
    float x1 ,y1,x2,y2,distance;
    printf("Enter the coordinates of first point");
    scanf("%f %f",& x1, &y1);
    printf("Enter the coordinates of second point");
    scanf("%f %f", & x2,&y2);

    distance = sqrt(pow(x2-x1, 2)+ pow(y2-y1,2));
    printf("The value of Distance between the two points is: %f\n",distance);
    return 0;
}