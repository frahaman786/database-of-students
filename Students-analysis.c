#include<stdio.h>
#define MAX_STUDENTS 450
struct Student{
    int roll;
    char name[50];
    char dept[50];
    char course[50];
    int year;
    

};
int main(){
    struct Student student[MAX_STUDENTS];
    int n;
    int b;
    printf("Enter the students(max %d)", MAX_STUDENTS);
    scanf("%d",&n);
    if(n > MAX_STUDENTS || n < 1){
        printf("invalid");
    }
    getchar();
    for(int i = 0; i < n; i++){
        printf("Enter the details for students %d:\n",i+1);
        printf("Enter the name: ");
        gets(student[i].name);
         printf("Enter department: ");
        gets(student[i].dept);
        printf("Enter course: ");
        gets(student[i].course);
        printf("Enter roll: ");
        scanf("%d",&student[i].roll);
       
        printf("Enter the year: ");
        scanf("%d",&student[i].year);
    getchar();
    }
    printf("\nEnter the year: ");
    scanf("%d",&b);
    printf("\nStudents who joined in the year %d\n",b);
    int found = 0;
    for(int i = 0; i < n; i++){
        if(student[i].year == b){
            printf("Name: %s, Roll number: %d\n",student[i].name, student[i].roll);
            found = 1;
        }
    }
    if(!found){
        printf("No students found");
    }
    return 0;
}