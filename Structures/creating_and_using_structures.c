#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Good practice: this is method 1 for defining a struct */
    struct car
    {
        int weight;
        int length;
        int enginePower;
    };

    struct car Dacia;
    struct car Renault;
    struct car Skoda;

    Dacia.weight=100;
    Dacia.length=50;
    Dacia.enginePower=75;

    /* Method 2 for defining a struct */
    struct otherCar
    {
        int weight;
        int height;
        int enginePower;
    } Mercedes,Audi;

    struct otherCar VW={213,434,33};
    struct otherCar Honda={.enginePower=234,.weight=234,.height=232};

    /* Method 3 for defining a struct */
    struct
    {
        int weight;
        int height;
        int enginePower;
    } Nissan, Opel;


    return 0;
}
