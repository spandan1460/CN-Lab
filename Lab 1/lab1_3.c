#include <stdio.h>
int main(){
    unsigned int input;
    printf("\n Enetr the number: ");
    scanf ("%d",&input);
    unsigned char byte1;
     unsigned char byte2;
      unsigned char byte3;
       unsigned char byte4;
    byte1 = (char)(input & 0XFF );
    byte2 = (char)((input>>8 )& 0XFF );
    byte3 = (char)((input>>16 )& 0XFF );
    byte4 = (char)((input>>24)& 0XFF );

    printf ("%02X \n",byte1);
    printf ("%02X \n",byte2);
    printf ("%02X \n",byte3);
    printf ("%02X \n",byte4);

    return 0;

}