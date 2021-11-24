#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,i,num;

    file=fopen("Student.txt","a");
    if(file==NULL)
    {
        printf("file doesn't exist");

    }
    else
    {
        printf("file is opened\n\n");
        printf("Enter number of students: ");
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            printf("Enter student name : ");
            scanf("%s",name);

            printf("Enter student age : ");
            scanf("%d",age);

            printf("Enter student phoneNumber : ");
            scanf("%d",phoneNumber);

            fprintf(file,"%s\t\t%d\t\t%d\n",name,age,phoneNumber);
            fclose(file);



        }





    }




    getch ();

}
