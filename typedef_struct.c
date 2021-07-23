#include<stdio.h>
#include<string.h>
typedef struct complex
{
	float real,image;
}
	complex;
	complex add (complex n1, complex n2);

int main()
{
	complex n1,n2,result;
	printf("for 1st complex number \n");
	printf("Enter the resal and imaganary parts :");
	scanf("%f%f",&n1.real, &n1.image);
	printf("for 2st complex number \n");
	printf("Enter the resal and imaganary parts :");
	scanf("%f%f",&n2.real, &n2.image);
	result = add(n1,n2);
	printf("sum = %0.1f+%0.1fi", result.real,result.image);
	return 0;
}
complex add (complex n1,complex n2)
{
	complex temp;
	temp.real = n1.real+n2.real;
	temp.image = n1.image+n2.image;
	return (temp);
}