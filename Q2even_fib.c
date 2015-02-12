/*Project Euler Problem 02 */
/*
 * author @fifinonz
 * https://github.com/fifinonz
 *
*/

#include <stdio.h>


/*Main*/
int main (void) 
{
	int fibonacci=0;
	int number=4000000;
	int even_fib = 0;
	int i=1;
	int j=1;
	int k, mod;
/* Function Fibonacci*/

while( fibonacci<number)
{
	fibonacci=i+j;
	i=j;
	j=fibonacci;
	mod= fibonacci%2;
	
	if (mod==0){
		
	even_fib+=fibonacci;
}

}
printf("Answer:  %d\n" , even_fib);
return 0;
}
