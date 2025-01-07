#include<stdio.h>
struct student
{
    int Rollno;
    int age;
    char Name[20];
    char Address[30];
    float Marks;
};
int main()
{
    struct student s;
    printf("Enter the roll no");
    scanf("%d",&s.Rollno);
    printf("Enter the age");
    scanf("%d",&s.age);
    printf("Enter the name");
    scanf("%s",&s.Name);
    printf("Enter the address");
    scanf("%s",&s.Address);
    printf("Enter the marks");
    scanf("%f",&s.Marks);

    printf("\n *** the record of student ***");
    printf("\n Roll no=%d",s.Rollno);
    printf("\n Age=%d",s.age);
    printf("\n Name=%s",s.Name);
    printf("\n Address=%s",s.Address);
    printf("\n Marks=%f",s.Marks);
    return 0;

}