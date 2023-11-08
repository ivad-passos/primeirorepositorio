#include <stdio.h>

int main()
{
    double m[2][2][3] =
    {
        {1.2, 9.0, 3.2},
        {9.2, 0.5, 1.5},
        {7.3, 7.9, 4.8}
    };
    printf("%.1lf ", m[2][1]);

    return 0;
}