#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main()
{
    system("cls"); 
    FILE *fp1;
    char another='y';
    struct studentinfo{
        char name[50];
        char address[50];
        char gender[5];
        char email[50];
        int mobileno;
        int studentid;
        
    };
    
    struct studentinfo student;
    
    fp1=fopen("info.txt","rb");
    if (fp1==NULL)
    {
        printf("\nCannot open file");
        return -1;
    }
    while (fread(&student,sizeof(student),1,fp1)==1)
        printf("%s%s%s%d%d%s",student.name,student.address,student.gender,student.mobileno,student.studentid,student.email);
fclose(fp1);
return 0;
}