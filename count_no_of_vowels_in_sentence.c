/*  Count the number of vowels in a string using C */
#include <stdio.h>
#include <math.h>
#include <string.h>
void Solve()
{
    unsigned short count = 0, vowels = 0;
    char str[100], c;
    scanf("%[^\n]", str);
    while(str[count] != '\0') 
    {
          c = str[count];
          if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'
          || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
          vowels++;
          printf("%c ", c);
     }
     count++;
   }
   printf("\n");
   printf("NUMBER OF VOWELS In Given string Are: %hu \n", vowels);
}
int main()
{
    Solve();
    return 0;
}