#include <stdio.h>
int main()

{
    //Declaring variables
    int   inch;
    float feet, yard, cm;                   //formerly ',' instead o;
    
    //asking user inpute
    printf("Enter value in inches: ");
        scanf("%d", &inch);                 //formerly scanf("%d, inch");

    //Converting inches into different measurements
    feet = inch / 12.0;                     
    yard = feet / 3;                        //formerly yard = yard / 3
    cm = inch * 2.54;                       //formerly 'x' instead of *
                                            //and missing ';'
    printf("\n%d inches is equivalent to:\n", inch);
    printf("Feet = %.2f\n", feet);
    printf("Yard = %.2f\n", yard);
    printf("CM = %.2f\n", cm);              //formerly '%2f\n'
        
    //potentially irrelevant
    printf("M = CM / 100\n");               //formerly 'cm'
    return 0;
}
