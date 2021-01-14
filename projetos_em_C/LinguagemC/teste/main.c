/* Soma de dois numero */

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    count=0;
   char str[10];

   printf ("digite os characteres...\n");

   while (count <= maxChar){
           str[count] = getchar();
           if(str[count] == 0x0A){
              break;
           }
           count ++;
   }
}
