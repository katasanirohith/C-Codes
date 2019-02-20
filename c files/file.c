#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void search();
char name[50];
int rno;
 float mark;
 


void main()
{
int ch;
printf("enter your choice\n1.create\n2.display\n3.search\n4.insert\n");
scanf("%d", &ch);

switch(ch)
 {
  case 1 : create();
            break;
  case 2 : display();
            break;
  case 3 : search();
           break;
  case 4 : insert();
           break; 
  default : printf("error"); 
  
  }
  }
  
  void create()
  {
  int i,n;
  printf("enter num of stdnts");
  scanf("%d",&n);
  	FILE *fp;
  	fp=(fopen("end.txt","w"));
  	if(fp==NULL)
  	 {
  	  printf("error!!");
  	  exit(1);   
  	 }
   for(i=0;i<n;++i) 
   {
    printf("enter name of stdnt %d",i+1);
    scanf("%s",name);
    printf("give roll num");
    scanf("%d",&rno);	 
  	printf("enter marks");
  	scanf("%f",&mark);
    fprintf(fp,"%s %d %f",name,rno,mark);   
    }
    fclose(fp);
    }
    
    
    void display()
    {
    FILE *fp;
   
    fp=(fopen("end.txt","r"));
    if(fp==NULL)
       {
         printf("Error");
         exit(1);
         }
         
        while(!feof(fp))
        {
          fscanf(fp,"%s %d %f",name,&rno,&mark);
          printf("Name : %s Roll No : %d marks : %f",name,rno,mark);
          }
          fclose(fp);
          }
          void search()
          {
           int roll;
           printf("enter rno of stdnt to search");
           scanf("%d" , &roll);
           FILE *fp;
           fp=(fopen("end.txt","r"));
           if(fp==NULL) 
           {
            printf("error");
            exit(1);
            }
            while(!feof(fp))
            {
              fscanf(fp,"%s %d %f",name,&rno,&mark);
              if(rno==roll)
              {
                 printf("Name : %s\nRoll no : %d\nMarks : %f\n",name,rno,mark);
                 return;
                 }
                 }
                 printf("Not Found");
                 fclose(fp);
                 }
 void insert()
 {
  int i,n;
  printf("enter num of stdnts");
  scanf("%d",&n);
  	FILE *fp;
  	fp=(fopen("end.txt","a"));
  	if(fp==NULL)
  	 {
  	  printf("error!!");
  	  exit(1);   
  	 }
   for(i=0;i<n;++i) 
   {
    printf("enter name of stdnt %d",i+1);
    scanf("%s",name);
    printf("give roll num");
    scanf("%d",&rno);	 
  	printf("enter marks");
  	scanf("%f",&mark);
    fprintf(fp,"%s %d %f",name,rno,mark);   
    }
    fclose(fp);
    }
    
    
      
