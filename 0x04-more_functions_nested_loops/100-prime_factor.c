#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143 
* followed by a new line 
* Return: Always 0 (Success) 
*/
 int main(void) 
 {
      int i, j, num;
  
         num = 612852475143;
  
         for(i=2; i<=num; i++) {
            if(num%i==0) {
             /* Check 'i' for Prime */ 
             isPrime = 1;
              for(j=2; j<=i/2; j++)    
               {
               if(i%j==0) 
               { 
               isPrime = 0; 
               break;
              }
              }          if(isPrime==1) 
             { 
             printf("%d, ", i);
		}
	}

	return (0);
}
