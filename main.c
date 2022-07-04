#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, h, v;
    const float PI = 3.14;

    printf("Introduceti raza bazei (cm) : ");
    scanf("%f", &r);

    printf("Introduceti inaltimea (cm): ");
    scanf("%f", &h);

    v = PI * pow(r,2) * h;

    printf("Volumul cisternei este %.2f cm", v);
    return 0;
}
