#include <stdio.h>
int main(int argc, char *argv[])
{
 printf("jjjjjjjneww");
 if(argc != 2){
   printf("USER:  %s name \n", argv[0]);
   return -1;
 }
 printf("Hello %s \n", argv[1]);
 return 0;
}
