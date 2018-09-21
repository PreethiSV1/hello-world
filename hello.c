#include<stdio.h>
int main()
{
	printf("What's your name ? ");
	char s[25];
	scanf("%s",s);
	printf("Hey %s!\n",s);
	printf("Hope you will enjoy this!");
    
    int a;
    printf("You prefer 0 or 1? : ");
    scanf("%d",&a);
    if(a==0)
        printf("Zero!!\n");
    if(a==1)
        printf("One!!\n");
    
    char dob[10];
    printf("Enter DOB (dd/mm/yyyy) : ");
    scanf("%s",&dob);
    printf("You are %s born\n",&dob[6]);
    
    
}
