#include <stdio.h>
struct STUDENT {
    char name[10];
    int roll;
    int marks;
};
int main(){
    struct STUDENT s[3];
    int i, max_ind=0;
    for (i=0;i<3;i++){
        printf("Enter the name , roll , marks of student %d\n", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("---------Student Details-----------------\n");
    for (i=0;i<3;i++){
        printf("%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
        
        }
    for (i=0;i<3;i++){
        if (s[i].marks>s[max_ind].marks){
            max_ind=i;
    
}
    }
printf("Student with maximum marks");
printf("%s %d %d", s[max_ind].name,s[max_ind].roll, s[max_ind].marks);


}
