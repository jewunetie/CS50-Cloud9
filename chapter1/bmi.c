#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float weight;
    printf("Weight? (in ibs)");
    weight = get_float();
    float height;
    printf("Height? (in inches)");
    height = get_float();
    weight = weight*0.45;
    height = height*0.025;
    height = height*height;
    float bmi;
    bmi = weight/height;
    if (bmi>23)
    {
        printf("unhealthy");
    }
    else
    {
        printf("you are good :)   ");
    }
    printf("BMI: %.1f\n", bmi);
}