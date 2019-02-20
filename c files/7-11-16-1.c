#include<stdio.h>
 void file_print();
 void file_append();
 void file_rw();
int main()
{
  
  file_rw();
 // file_append();
  //file_print();   
 
  return(0);
}

 void file_rw()
{

  FILE *fd;
  int AccNo;
  float Balance;
  char Name[20];
   
  fd = fopen("abc123.txt", "r+");
     printf("\n Enter Name, AccNo, Balance \n");
      scanf("%s%d%f",Name, &AccNo, &Balance);
      //printf("file ptr val = %d \n", ftell(fd));
      fseek(fd,4,SEEK_SET);
      //printf("file ptr val = %d \n", ftell(fd));   
      fprintf(fd, "%s %d %f \n", Name, AccNo, Balance);
   fclose(fd);
 
}

 void file_print()
{ 
   FILE *fd;
 int AccNo;
 float Balance;
 char Name[20];
  fd=fopen("abc123.txt", "r");
   while(fscanf(fd, "%s%d%f", Name, &AccNo, &Balance)==3) 
     printf(" %s %d %f ", Name, AccNo, Balance);
  fclose(fd);
}


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
}
 
