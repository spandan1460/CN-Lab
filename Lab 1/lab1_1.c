#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
    printf("The numbers are as follows :\n");
    for(int i=1;i<argc;i++)
    printf("%s\t",argv[i]);
    printf("\n");
    char *temp=argv[1];
    argv[1]=argv[2];
    argv[2]=temp;
    printf("The arguments after swapping are as follows:\n");
    for(int i=1;i<argc;i++)
    printf("%s\t",argv[i]);
    printf("\n");
    return 0;
}
