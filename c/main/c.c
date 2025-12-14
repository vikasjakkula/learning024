#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int ch,len;
printf("enter str1 ");
scanf("%s",a);
printf("enter str2 ");
scanf("%s",b);
while(1)
{
printf("\n choose ur option");
printf("\n 1.length\n 2.compare\n 3.copy\n 4.concat\n");
printf("enter ur choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: len=strlen(a);
printf("length is %d\n",len);
break;
case 2:if(strcmp(a,b)==0)
{
printf("both strings are equal\n");
}
else
if(strcmp(a,b)>0)
printf("%s is greater than %s\n",a,b);
else
printf("%s is greater than %s\n",b,a);
break;
case 3: printf(" str1 %s\n",a);
printf("str2 %s\n",b);
strcpy(a,b);
printf("after copy strings are\n");
printf(" str1 %s\n",a);
printf("str2 %s\n",b);
break;
case 4:printf(" str1 %s\n",a);
printf("str2 %s\n",b);
strcat(a,b);
printf(" str1 %s\n",a);
break;
}
}
}