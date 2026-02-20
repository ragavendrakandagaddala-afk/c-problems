#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,m6,total,percentage;
    char grade;
    scanf("%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6);
    total=m1+m2+m3+m4+m5+m6;
    percentage=(total/600)*100;
    if(percentage > 95){
        grade='A';
    }else if(percentage>85){
        grade='B';
    }else if(percentage>=75){
        grade='c';
    }else if(percentage>=65){
        grade='D';
    }else if(percentage>=45){
        grade='E';
    }else{
        grade='F';
    }
    printf("%.2f\n",total);
    printf("%.2f\n",percentage);
    printf("%c\n",grade);
    
    return 0;
}
