//string exploration.
#include <stdio.h>
#include <string.h>
int main(){
    int i,n;
    printf("Enter the number of characters in the string:\n" );
    scanf("%d",&n);
    char str1[n];
    for (i=0;i<n;i++){
        scanf("%s",&str1[i]);
    }
    printf("%s\n" ,str1);
    

    //adding another string to the previous one.
    int m;
    printf("Enter the number of characters in the second string: \n");
    scanf("%d", &m);
    char str2[m];
    for (i=0;i<m;i++){
        scanf("%s",&str2[i]);
    }
    printf("%s\n", str2);
     
    printf("The concatantion of the two string retunrs : %s", strcat(str1,  str2));
}