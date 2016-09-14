#include<stdio.h>

int main()

{
        float cel, fahre = 0;
        int lower = 0;
        int upper = 300;
  //      printf("enter the temperature in fahrenheit\n");
//        scanf ("%f", &fahre);
 //       printf("the temperature conversion table is\n ");
        printf("fahrenheit cel\n ");
        if ( fahre <= upper)
        {
                cel = (5.0/9.0)*(fahre - 32);
                printf("%3.0f    %6.0f\n", fahre , cel);

        }
        else
        {
                printf("Entered temp is out of range");
        }
        return 0;
}
