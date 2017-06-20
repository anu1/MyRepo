#include<stdio.h>
int main()
{
    struct employee
    {
        char name[40];
        int code,doj,moj,yoj;
 
    };
    struct employee e[3];
    int i,n,day,mon,curr_yr,yr;
    printf("How many records you want to insert?:"):
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee code:\n");
        scanf("%d",&e[i].code);
        printf("Enter employee name:\n");
        gets(e[i].name);
        printf("Enter date of joining dd/mm/yy\n");
        scanf("%d/%d/%d",&e[i].doj,&e[i].moj,&e[i].yoj);
    }

        printf("Enter current date dd/mm/yy\n");
        scanf("%d/%d/%d",&day,&mon,&curr_yr);
       //d=15; m=1; y=12;
        for(i=0;i<n;i++){
        yr=curr_yr-e[i].yoj;
        if(yr >= 3)
        {
            printf("%s",e[i].name);
        }
        }
}
