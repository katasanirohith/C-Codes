#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void file_print();
 void create_file();
 void file_insert();
 struct Employee
 {
    char name[20];
    int eid;
    float bpay; 
 };  

int main()
{
  
  create_file();
  file_print();
 file_insert();
 file_print();
  return(0);
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

 /*
 void file_append()
{
     FILE *fd;
  int AccNo;
  float Balance;
  char Name[20];
   fd= fopen("abc123.txt", "a");
      printf("\n Enter Name, AccNo, Balance \n");
      scanf("%s%d%f",Name, &AccNo, &Balance);
      printf("file ptr val = %d \n", ftell(fd));
      fseek(fd,4,SEEK_SET);
      printf("file ptr val = %d \n", ftell(fd));   
      fprintf(fd, "%s %d %f \n", Name, AccNo, Balance);
      printf("file ptr val = %d \n" ,ftell(fd));
      
   fclose(fd);
} */
 
