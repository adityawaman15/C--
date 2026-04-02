#include <stdio.h>

struct faculty{
    char name[100];
    int age;
    int salary;
};

int main(){

    struct faculty num[10];

    for(int i = 0; i <10; i++){
        printf("Enter details of person {%d}\n",i+1);

        printf("Faculty Name | ");
        scanf("%s", num[i].name);
        printf("Faculty Age | ");
        scanf("%d", &num[i].age);
        printf("Faculty Salary | ");
        scanf("%d", &num[i].salary);}
    
        for(int i = 0; i < 10; i++){
            printf("Faculty Name | %s, Age | %d, Salary | %d", num[i].name, num[i].age, num[i].salary);
        }
    

}

