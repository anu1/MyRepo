#include<stdio.h>
main()
{
enum sex{male,female};
enum age{minor,major};
struct policy
{
enum sex gender;
enum age age_a;
char policy_name[50];
int duration;
};
typedef struct policy PH;
PH p[1];
int i,gen;
for (i = 0; i < 1; i++)
	{
	printf("\nEnter the gender (male = 0 or female = 1) : ");
	scanf("%d", &gen);
	gen ? (p[i].gender = female) : (p[i].gender = male);
	printf("\nEnter the age status (major = 0 or minor = 1) : ");
	scanf("%d", &gen);
	gen ? (p[i].age_a = 'major') : (p[i].age_a = 'minor');

	//Clearing input stream
	while (getchar() != '\n');
		
	printf("\nEnter name of the customer : ");
	gets(p[i].policy_name);
	printf("\nEnter duration in years : ");
	scanf("%d",&p[i].duration);
	}

for (i = 0; i < 1; i++)
	{
	printf("\n%d\t%s\t%s\t%d\n", p[i].gender, p[i].age_a,p[i].policy_name,p[i].duration);
	//printf("\t%s\t%d", p[i].policy_name, p[i].duration);
	}
}
