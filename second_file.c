#include<stdio.h>
#include<stdlib.h>


int add (int a , int b)
{
	int sum = a + b; 
	return sum;

}
int main ()
{
	int val = 0;
	printf("hello world\n");
	val = add(5 , 7);
	printf ("%d\n" , val);
	return 0; 
}

