#include<stdio.h>

int main()
{
    int l_rac, w_rac, h_tri, b_tri, a, b, c;

    printf("Enter length of rectangle: ");
    scanf("%d", &l_rac);
    printf("Enter width of rectangle: ");
    scanf("%d", &w_rac);


    printf("Perimeter of rectangle: %d\n", 2 * (l_rac + w_rac));
    printf("Area of rectangle: %d\n", l_rac * w_rac);

    printf("Enter side 'a' of Triangle: ");
    scanf("%d", &a);
    printf("Enter side 'b' of Triangle: ");
    scanf("%d", &b);
    printf("Enter side 'c' of Triangle: ");
    scanf("%d", &c);

    printf("Enter height of Triangle: ");
    scanf("%d", &h_tri);
    printf("Enter base of Triangle: ");
    scanf("%d", &b_tri);

    printf("Perimeter of Triangle: %d\n", a+b+c);
    printf("Area of rectangle: %d\n", (h_tri * b_tri)/2);

    return 0;
}
