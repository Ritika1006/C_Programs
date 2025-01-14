#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int roll;
    char name[20];
    char course[10];
    fp=fopen("STUDENT.txt","a");
    if(fp==NULL)
    {
        printf("The file is not opened");
        return 0;
        exit(0);
    }
    printf("Enter the Roll no\n");
    scanf("%d",&roll);
    printf("Enter the Name\n");
    scanf("%s",&name);
    printf("Enter the Course\n");
    scanf("%s",&course);
    fprintf(fp,"%d %s %s",roll,name,course);
    fclose(fp);
    fp=fopen("STUDENT.txt","w");
    fscanf(fp,"%d %s %s",roll,name,course);
    printf("Enter the Roll no=%d",roll);
    printf("Enter the Name=%s",name);
    printf("Enter the Course=%s",course);
    fclose(fp);
    return 0;

}