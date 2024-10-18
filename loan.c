#include <stdio.h>
int main()
{
    int age,salary,experience;

    printf("Please enter the following details:-\n\n");

    printf("Enter your age : ");
    scanf("%d", &age);

    if(age > 25){

        printf("Enter your salary : ");
        scanf("%d", &salary);

            if(salary > 40000){

                printf("Enter your experience : ");
                scanf("%d", &experience);
                
                    if (experience > 2){
                printf("Congratulations! You are eligible for the loan.\n");
            } else {
                printf("You must have been employed for at least 2 years to be eligible for the loan. \n");
            }
        } else {
            printf("You must have a minimum monthly income of Rs. 40,000 to be eligible for the loan.\n");
        }
    } else {
        printf("You must be at least 25 years old and not older than 60 years old to be eligible for the loan.\n");
    }
return 0;
}