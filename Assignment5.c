#include <stdio.h>

struct student{
    int sub[5];
    int total;
    int average;
};

int main(){
    int fail = 0;
    int pass = 0;
    struct student x[10];
    int distinction= 0;
    int n = 10;
    int overall = 0;
   
   for(int i = 0; i < n;i++){    
       printf("----Enter marks of student {%d} Out of 100.----\n\n", i+1);
       x[i].total = 0;
       
    for(int j = 0; j < 5; j++){
       
       printf("Enter marks of subject %d | ",j+1);
       scanf("%d",&x[i].sub[j]);
       printf("");
       x[i].total += x[i].sub[j];
       
    }
       
   }
   
   printf("-----Results-----\n");
   
   for(int i = 0; i < n;i++){    
     
      printf("\nStudent {%d} | Percentage | {%d}, Distinction | ", i+1,x[i].total/5);
      x[i].average = x[i].total/5;
      if(x[i].sub[1] <40 || x[i].sub[2] <40 ||x[i].sub[3] <40 || x[i].sub[4] <40 || x[i].sub[0] < 40){printf("Fail!");
          fail++;
      }
      else if(x[i].average >= 75){
          printf("Distinction");pass++;
          distinction++;
      }
      else if(x[i].average >=65){
          printf("First Class");pass++;
      }
      else if(x[i].average >= 55){
          printf("Second Class");pass++;
      }
      else{
          printf("Pass");pass++;
      }
      }
      
      for(int i = 0; i < n; i++){
          overall += x[i].average;
          
      }
      overall /=n;
      printf("\nOverall Percentage of the Class | %d \nTotal Number of students Passed | %d \nTotal Number of Stundets Failed %d\nTotal Number of Distinctions | %d", overall,pass,fail,distinction);
      
}
   
   
   
   
   