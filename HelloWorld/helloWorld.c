#include "helloWorld.h"

int main( int argc, const char* arg[] )
{
	printf( "\nHello World\n\n" );

	int res; 
	int a = 100;
	int b = 200;
	
	res = max(a,b);
	
	printf("The maximum value is: %d\n", res );
}

/*Function that returns max of two values. */

int max(int num1, int num2){

	int result;

	if(num1 > num2)
		result = num1;
	else
		result = num2;

	return result;  

}
