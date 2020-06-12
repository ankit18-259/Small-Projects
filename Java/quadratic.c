#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, D, r1, r2, e;
    scanf("%f %f %f", &a, &b, &c);
    D= ((b*b)-(4*a*c));

    if (D>=0)
    {
        r1=((-b+sqrtf(D))/2*a);
        r2=((-b-sqrtf(D))/2*a);
        printf("The roots are %f and %f", r1,r2);
    }
    if (D<0)
    {
        D=sqrtf(-D)/2*a;
        e=-b/2*a;
        printf("The roots are %f+%fi and %f-%fi", e, D, e, D); 
    }


}