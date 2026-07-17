#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    float total,percentage;

    printf("enter the values in the subjects");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    total=s1+s2+s3+s4+s5;
    percentage=(total/500)*100;

    printf("\npercentage of the student = %f",percentage);
    return 0;


}