#include<stdio.h>
struct s
{
char ch;
int i;
float a;
};
main()
{
struct s var={'C',100,12.55};
f(var);
g(&var);
}
f(struct s v)
{
printf("\n %c \n %d \n %f \n",v.ch,v.i,v.a);
}

g(struct s *v)
{
printf("\n %c \n %d \n %f \n",v->ch,v->i,v->a);
}
