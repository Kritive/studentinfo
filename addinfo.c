#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>

int viewinfo();

int main(void){
    
    
    char another='y';
    int i;
    struct studentinfo{
        char name[50];
        char address[50];
        char gender[5];
        char email[50];
        int mobileno;
        int studentid;
        
    };
    
    struct studentinfo student;
    FILE *fp1;
    fp1=fopen("info.txt","wb");
    system("cls");

    if (fp1==NULL){
        printf("Sorry invalid option\n");
        return -1;
        }
while(another=='y')
{
        system("cls");
        printf("...Enter Student name .\n");
        gets(student.name);
        printf("...Enter addreess.\n");
        gets(student.address);
        gender:
        printf("...Enter F for female , M for male.\n");
        scanf("%s",student.gender);
        mobileno:
        printf("...Enter mobile no please.\n");
        fflush(stdin);
        scanf("%d",&student.mobileno);
        printf("...Enter student ID.\n");
        scanf("%d",&student.studentid);
        printf("...Enter email address:\n");
        fflush(stdin);
        gets(student.email);
        fwrite(&student,sizeof(student),1,fp1);
        printf("\n");
        printf("\nDo you want to add another data(y/n)");
        fflush(stdin);
        another=getche();
}
        fclose(fp1);   
return 0;
}

int viewinfo()
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
}