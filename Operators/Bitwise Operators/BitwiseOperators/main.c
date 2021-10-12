#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int myAge=42;  //0010 1010
    unsigned int maraAge=10; //0000 1010

    int result=0;

    //operation of bitwise AND : & operator
    result=myAge & maraAge; //0000 1010  = (D) 10
    printf("The result of the bitwise AND is %d.\n",result);

    //operation of bitwise OR : |  operator
    result=myAge | maraAge; //0010 1010 = (D) 42
    printf("The result of the bitwise OR is %d.\n",result);

     //operation of bitwise XOR : ^  operator
    result=myAge ^ maraAge; //0010 0000 = (D) 32
    printf("The result of the bitwise XOR is %d.\n",result);

    //operation of bitwise NOT : ~  operator
    result= ~myAge;  //1101 0101 = (D) -43
    printf("The result of the bitwise NOT is %d.\n",result);

    //operation of bitwise LEFT SHIFT : <<2 operator
    result=maraAge<<2; // 0010 1000 = (D) 40
    printf("The result of the bitwise LEFT SHIFT <<2 is %d.\n",result);

    //operation of bitwise RIGHT SHIFT : >>2 operator
    result=maraAge>>2; // 0000 0010 = (D) 2
    printf("The result of the bitwise RIGHT SHIFT <<2 is %d.\n",result);


    return 0;
}
