#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void file_print();
 void create_file();
 void file_insert();
 void del_rec();
 void rec_search();
 struct Employee
 {
    char name[20];
    int eid;
    float bpay; 
 };  

int main()
{
  
  //create_file();
 // file_print();
 // file_insert();
  // file_print();
   //file_insert();
   //file_insert();
   //file_print();
   //del_rec();
   file_print();
   rec_search();

  return(0);
}

void rec_search()
{ 
   FILE *fd;
   struct Employee *pe=malloc(sizeof(struct Employee));
   int eid;
  printf("\n Enter employee id \n");
      scanf("%d",&eid);
  
  fd=fopen("a123.txt", "r");
    fseek(fd,sizeof(struct Employee)*(eid-1),SEEK_SET);
    fread(pe, sizeof(struct Employee), 1, fd );
  
   if(pe->eid==-111)
     printf("Not Found \n");
   else
     printf("Name= %s  \n eid = %d \n bpay =%f \n", pe->name, pe->eid, pe->bpay);
  fclose(fd);
}



void create_file()
{
     int n=2;
     //creating empty record
     struct Employee er;
     strcpy(er.name, "  ");
     er.eid=-111;
     er.bpay=0;

     FILE *fd;
   fd= fopen("a123.txt", "w");
     fwrite( &er, sizeof(struct Employee), 1,fd);
     fwrite( &er, sizeof(struct Employee), 1,fd);
     fwrite( &er, sizeof(struct Employee), 1,fd);
    fclose(fd);
}
 


void del_rec()
{

  FILE *fd;
  struct Employee e;
   int eid;

  //creating empty record
     struct Employee er;
     strcpy(er.name, "  ");
     er.eid=-111;
     er.bpay=0;



  fd = fopen("a123.txt", "r+");
     printf("\n Enter employee id \n");
      scanf("%d",&eid);
      //printf("file ptr val = %d \n", ftell(fd));
      fseek(fd,sizeof(struct Employee)*(eid-1),SEEK_SET);
      //printf("file ptr val = %d \n", ftell(fd));   
     fwrite(&er, sizeof(struct Employee), 1,fd);
   fclose(fd);
 
} 



 void file_insert()
{

  FILE *fd;
  struct Employee e;
   
  fd = fopen("a123.txt", "r+");
     printf("\n Enter Name, AccNo, Balance \n");
      scanf("%s%d%f",e.name, &e.eid, &e.bpay);
      //printf("file ptr val = %d \n", ftell(fd));
      fseek(fd,sizeof(struct Employee)*(e.eid-1),SEEK_SET);
      //printf("file ptr val = %d \n", ftell(fd));   
     fwrite(&e, sizeof(struct Employee), 1,fd);
   fclose(fd);
 
} 

 void file_print()
{ 
   FILE *fd;
   struct Employee *pe=malloc(sizeof(struct Employee));

  fd=fopen("a123.txt", "r");
   while(fread(pe, sizeof(struct Employee), 1, fd ) == 1)
     printf(" %s %d %f ", pe->name, pe->eid, pe->bpay);
  fclose(fd);
}

 
