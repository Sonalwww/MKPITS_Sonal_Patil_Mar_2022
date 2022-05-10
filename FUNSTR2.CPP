struct student
{
int id;
char name[30];
};
void main()
{
struct student s;
s=dis();
printf("student id:%d",s.id);
printf("student name:%s",s.name);
}
struct student dis()
{
struct student s;
printf("enter student id:");
scanf("%d",&s.id);
printf("enter student name:");
scanf("%s",&.name);
return s;
}