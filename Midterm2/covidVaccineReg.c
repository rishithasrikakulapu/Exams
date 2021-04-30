#include<stdio.h>
#include<string.h>
#include <time.h>

//declaring functions 
void Register();
void generate_code();
void retrieve();

// This structure is used to capture all the
// data for an individual registration.
struct Registration_info{

    char *firstName, *lastName, *dOB, *dateOfPrevDose, *vaccineType, *sex;
    int *doseNum, *zipCode, *m, *d, *y;
    
}inp;


int main(){

//calling functions
 Register();
 generate_code();
 retrieve();

return 0;

}

//defining function that collects user info
void Register(){

	printf("Enter your first name: ");
	scanf("%s",&inp.firstName);
	printf("Enter your last name: ");
	scanf("%s",&inp.lastName);
	printf("Enter your date of birth as (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&inp.m,&inp.d,&inp.y);
	printf("Enter your sex-Male/Female/Do not wish to identify: ");
	scanf("%s",&inp.sex);
	printf("Enter the dose number- 1 or 2: ");
	scanf("%d",&inp.doseNum);
	printf("Enter the date of previous dose as (mm/dd/yyyy): ");
	scanf("%s",&inp.dateOfPrevDose);
	printf("Enter the type of vaccine-Pfizer/Moderna/Johnson&Johnson: ");
	scanf("%s",&inp.vaccineType);
	printf("Enter the residential zipcode: ");
	scanf("%d",&inp.zipCode);

}

//defining function that generates unique 
//code for registering user. 
void generate_code(){
    int last3_zip = 0, year, age, curyear;

//calculating local time
    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds); 
    printf("Current year = %d\n",(current_time->tm_year + 1900));

//finding last 3 digits of zip code
    last3_zip = (int) inp.zipCode%1000;  

//calculating age of user
    age = (current_time->tm_year + 1900) - (int) inp.y;

//printing code
    printf("\nRegistration Code is - %c%c%d%c", inp.firstName, inp.lastName, age, inp.vaccineType); 
    printf("%d", last3_zip);
}

//defining function that prints out user info.
void retrieve(){

 	 printf("\nUser details are: ");
        printf("\nFirst name :%s ", &inp.firstName);
        printf("\nLast name: %s", &inp.lastName);
        printf("\nDate of birth: %d/%d/%d",inp.m,inp.d,inp.y);
        printf("\nSex: %s",&inp.sex);
        printf("\nDose number: %d ",inp.doseNum);
        printf("\nDate of previous dose: %s",&inp.dateOfPrevDose);
        printf("\nType of vaccine : %s",&inp.vaccineType);
        printf("\nResidential zipcode: %d",inp.zipCode);
	printf("\n");

}