#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    float a, b, c;
    float process(float, float, float, char);

    printf("Enter your,\n\t a: ");
    scanf("%f",&a);
    printf("\t b: ");
    scanf("%f",&b);
    printf("\t c: ");
    scanf("%f",&c);

    float dec = b*b - 4*a*c;
    if(a == 0){
        printf("\nA value cannot be zero!\n");
        exit(1);
    }
    else if(dec < 0){
        printf("\ndecrement value cannot be negetive!\n");
        exit(1);
    }
    //printf("%.2f, %.2f, %.2f\n",a,b,c);
    printf("\n\t%.1fx^2 + %.1fx + %.1f = 0\n",a,b,c);

    printf("\nRoots are,\n");
    printf("\t -> %.2f\n",process(a,b,c,'+'));
    printf("\t -> %.2f\n",process(a,b,c,'-'));

}

float process(float a, float b, float c, char ch)
{
    float dec = b*b - 4*a*c;
    float out;

    if(ch == '+'){
        out = ((b*-1) + sqrt(dec)) / 2*a;
    }
    else{
        out = ((b*-1) - sqrt(dec)) / 2*a;
    }

    return out;

}