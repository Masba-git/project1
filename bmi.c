#include<stdio.h>
int main(){
    int weight;
    float height,BMI;

    printf("Enter your weight in kg:");
    scanf("%d",&weight);
    printf("\nEnter your height:");
    scanf("%f",&height);
//code by Masba
    BMI=weight/height*2;
    printf("\nYour BMI is %.2f",BMI);
    if (BMI<=18.4){
        printf("\nYou are under height");
    }
    else if (BMI<=24.9){
        printf("\nYou have normal weight");

    }
    else if(BMI<=29.9){
        printf("\nYou are over heighted");

    }
    else{
        printf("\n You are obesity");
    }
    
    return 0;

}