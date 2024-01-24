#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("How old are you?: ");
	scanf(" %i", &age);


	printf("What is your gpa?: ");
	scanf(" %f", &gpa);
	

	printf("In what grade level are you in?: ");
	scanf(" %c", &grade);
	

	printf("age = %i, gpa = %f, grade = %c\n", age, gpa, grade);

	return 0;
}	
