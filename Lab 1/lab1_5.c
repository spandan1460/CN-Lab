#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int n;
    char *byte_store = (char*)malloc(sizeof(int));
    int size = sizeof(byte_store)/sizeof(byte_store[0]);//size of the array
    puts("Enter a number :");
    scanf("%d", &n);
    char *p = (char*)&n;
    for(int i = 0; i < size; i++)
    {
        byte_store[i] = *(p+i);
    }
    printf("The machines stores each byte in this format :\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d",byte_store[i]);
    }
    puts("\n");
    int temp;
    int s = 0;//Start of the array.
    int e = size-1;//End of the array.
    if(*p)
    {
        puts("You have a Little Endian Machine\n");
    }
    else
    {
        puts("You have a Big Endian Machine\n");
    }
    while(s<e)
    {
        temp=byte_store[s];
        byte_store[s]=byte_store[e];
        byte_store[e]=temp;
        s++;
        e--;
    }
    printf("Reversed Endianness is :\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d",byte_store[i]);
    }
    puts(" ");

    return 0;
}