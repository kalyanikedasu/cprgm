#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
};
void main()
{
	struct student s1 = {"Kalyani ",21,45.56};	//tab occurs after 8places 
	struct student s2 = {"Bhargavi",23,50.35};
	printf("%s\t%d\t%.2f\n", s1.name,s1.age,s1.marks);
	printf("%s\t%d\t%.2f\n",s2. name,s2.age,s2.marks);
}
