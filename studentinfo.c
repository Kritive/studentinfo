#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int login();
int addinfo();
int viewinfo();

int main()
{
  int i,num;
  login();
informationpanel:
      system("cls");
      printf("\n\t\t\t\t\t\t");
        for (i=1; i <= 50; i++)
      {
        printf(":");
        Sleep(5);
      }
      Sleep(500);
      printf("\n\t\t\t\t\t\t\t1-> Add Student's Information.");
      Sleep(500);
      printf("\n\t\t\t\t\t\t\t2-> View Student's Information.");
      Sleep(500);
      printf("\n\t\t\t\t\t\t\t3-> Edit Student's Information.");
      Sleep(500);
      printf("\n\t\t\t\t\t\t\t4-> Delete Student's Information.");
      Sleep(500);
      printf("\n\t\t\t\t\t\t\t5-> Exit System");
      Sleep(500);
      printf("\n\t\t\t\t\t\t");
        for (i=1; i <= 50; i++)
      {
        printf(":");
        Sleep(5);
      }
      
      printf("\n\n\t\t\t\t\t\t\tPlease enter your choice:");
      scanf("%d",&num);
      switch (num)
      {
        case 1:
            fflush(stdin);
            addinfo();
            goto informationpanel;
            break;
        case 2:
            fflush(stdin);
            viewinfo();
            getch();
            goto informationpanel;
            break;
        case 3:
            printf("\t\t\nUnder construction");
            break;
        case 4:
            printf("\t\t\nUnder construction");
            break;
        case 5:
            exit(0);
            break; 
      default:
        break;
      }
}

//for login
int login()
{
  FILE *fp;

  char n[250],p[250],confirm[10];
  
  fp = fopen("user.txt", "w");
  system("cls");
  if (fp != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    
  }
  printf("\n\t:::::::::::::::::::::::::::::::::::::::::::::  WELCOME TO SIGN UP PAGE ::::::::::::::::::::::::::::::::::::::::::::  ");

  printf("\n\n\t\t\t\t\t\t\tCREATE USERNAME:-");
  gets(n);
  initial:
  printf("\n\t\t\t\t\t\t\tCREATE 4 DIGIT PASSWORD:-");
  gets(p);
  printf("\n\t\t\t\t\t\t\tCONFIRM PASSWORD:-");
  gets(confirm);

  if (strcmp(p,confirm)==0){
      goto process;
      
  }
  else {
  printf("\n\t\t::::::::::::::::::::::::::::::::::::::::  SORRY WRONG PASSWORD  :::::::::::::::::::::::::::::::::::::::  ");
  goto initial;
  }

 process: 
  fprintf(fp, "%s %s", n, p);
  fclose(fp);

  fp=fopen("user.txt","r");

  int flag,i;
  char uname[25],pword[25],username[25],password[25],code;

  fscanf(fp,"%s%s",uname,pword);
  loginform:
  system("cls");
  Sleep(500);
  printf("\t");
  for (i=1; i <= 50; i++)
  {
    printf(":");
    Sleep(10);
  }

  printf("  LOGIN FORM  "); 

  for (i=1; i <= 50; i++)
  {
    printf(":");
    Sleep(10);
  }

  process1:
  printf("\n\n\t\t\t\t\t\t\tENTER USERNAME:-");
  gets(username);
  printf("\n\t\t\t\t\t\t\tENTER PASSWORD:-");
  for ( i = 0; i < 4; i++)
    {
      code=getch();
      password[i]=code;
      code='*';
      printf("%c",code);
        
    }
    getch();
    system("cls");

    printf("\t");
    for (i=1; i <= 118; i++)
  {
    printf(":");
    Sleep(5);
  }
    Sleep(1000);

    if ((strcmp(uname,username)==0) && (strcmp(pword,password)==0))
      {
        printf("\n\n\t\t\t\t\t\t\tLogin Sucessfull!!!");
        printf("\n\n");
        flag=1;
        printf("\n\t\t\t\t\t\tpress any key to continue...");
        getch();
        system("cls");
        goto welcome;  
      }
    else
      {
        printf("\n\n\t\t\t\t\t\t\tLogin Unsucessfull!!!");
        printf("\n\n");
        flag=0;
        printf("\n\n\t\t\t\t\t\tYou have entered wrong user id and password");
        printf("\n\t\t\t\t\t\tpress any key to continue...");
        getch();
        goto loginform;
      }
      welcome:
      printf("\033[0;36m");
      printf("\t\t\t\t\t\t\tW");
      Sleep(300);
      printf("E");
      Sleep(300);
      printf("L");
      Sleep(300);
      printf("C");
      Sleep(300);
      printf("O");
      Sleep(300);
      printf("M");
      Sleep(300);
      printf("E");
      Sleep(100);
      printf("\033[0m");
      printf("\033[0;31m");
      printf(" %s",username);
      printf("\033[0m");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      Sleep(100);
      printf(".");
      printf("\n\n\t\t\t\t\t\tpress any key to continue...");
      getch();
}

//for adding information
int addinfo()
{
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
    fp1=fopen("info.txt","ab");
    system("cls");

    if (fp1==NULL){
        printf("Sorry invalid option\n");
        return -1;
        }
while(another=='y')
{
        system("cls");
        printf("\t");
        for (i=1; i <= 118; i++)
      {
        printf(":");
        Sleep(5);
      }
        printf("\n\n\t\t\t\t\t\t\tENTER STUDENT'S NAME:  ");
        gets(student.name);
        printf("\n\t\t\t\t\t\t\tENTER ADDRESS:  ");
        gets(student.address);
        gender:
        printf("\n\t\t\t\t\t\t\tENTER GENDER(m for male || f for female):  ");
        scanf("%s",student.gender);
        mobileno:
        printf("\n\t\t\t\t\t\t\tENTER MOBILE No.:  ");  
        fflush(stdin);
        scanf("%d",&student.mobileno);
        printf("\n\t\t\t\t\t\t\tENTER STUDENT'S ID:  ");
        scanf("%d",&student.studentid);
        printf("\n\t\t\t\t\t\t\tENTER STUDENT'S E-MAIL:  ");
        fflush(stdin);
        gets(student.email);
        fwrite(&student,sizeof(student),1,fp1);
        printf("\n");
        printf("\n\t\t\t\t\t\t\tDo you want to add another data(y/n):  ");
        fflush(stdin);
        another=getche();
        for ( i = 1; i < 5; i++)
        {
                printf(".");
                Sleep(10);
        }
}
        fclose(fp1);   
return 0;
}

//for viewing information
int viewinfo()
{
      int i;
      system("cls"); 
      printf("\t");
      for (i=1; i <= 118; i++)
      {
        printf(":");
        Sleep(5);
      }
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
    printf("\n\t\t\t\t\t\tName\tAddress\tGender\tMobileNo\tID\tE-mail");
    printf("\n");
    while (fread(&student,sizeof(student),1,fp1)==1)
        printf("\n\t\t\t\t\t\t%s  %s  %s  %d  %d  %s",student.name,student.address,student.gender,student.mobileno,student.studentid,student.email);
fclose(fp1);
}