#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmph, mps;
        /* getting the input in km/hr from user */
        printf("Enter the value in kilometer/hour:");
        scanf("%f", &kmph);

        /* meter/second conversion */
        mps = (kmph * 1000) / 3600;

        /* print the output upto two decimal points */
        printf("%.2f km/hr = %.2f m/sec\n", kmph, mps);
}
