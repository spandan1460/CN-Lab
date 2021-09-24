#include<stdio.h>
struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};
int main()
{
    system("clear");
    int i,j,aggregate=0;
    printf("Enter Number :");

    scanf("%d",&i);
    j=i;
    struct pkt p;
    p.ch1=i;
    i=i>>8;
    p.ch2[0]=i;
    i=i>>8;
    p.ch2[1]=i;
    i=i>>8;
    p.ch3=i;
    printf("ch1 = %d, ch2[0] = %d, ch2[1] = %d, ch3 = %d\n",p.ch1,p.ch2[0],p.ch2[1],p.ch3);
    aggregate = p.ch3;
    aggregate=aggregate<<24;
    i=p.ch2[1];
    i=i<<16;
    aggregate=aggregate|i;
    i=p.ch2[0];
    i=i<<8;
    aggregate=aggregate|i;
    i=p.ch1;
    aggregate=aggregate|i;
    printf("Original number is %d and aggregate of structre is %d\n",j,aggregate);
    return 0;
}