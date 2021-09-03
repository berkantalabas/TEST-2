#include <stdio.h>

#include <string.h>

struct Grades
{
	int Calculus;
	int Physics;
	int Chemistry;
};
struct Student
{
	char *Name;
	int Age;
	struct Grades grades;
};
int main()
{

	struct Student student1;		
	student1.Name="berkant2";
	student1.Age=20;
	student1.grades.Calculus=100;
	student1.grades.Physics=98;
	student1.grades.Chemistry=95;
	printf("Name : %s\n",student1.Name);
	printf("Age : %d\n",student1.Age);
	printf("Calculus Grade : %d\n",student1.grades.Calculus);
	printf("Physics Grade : %d\n",student1.grades.Physics);
	printf("Chemistry Grade : %d\n",student1.grades.Chemistry);

	
	return 0;
}

