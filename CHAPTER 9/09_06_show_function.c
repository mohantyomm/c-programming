// Structure to hold the employee details in a company.

# include <stdio.h>
# include <string.h>
struct employee
{
    char name[30];
    char address[40];
    long long int ph_no;
    
    int experience;
    float salary;

};
void employeedetails(struct employee emp);
int main (){
    struct employee emp;
    // char *ptr=emp.name;
    // strcpy(ptr,"omm prakash mohanty");
    // char*ptr2=emp.address;
    // strcpy(ptr2,"odisha \n ,Bhadrak");
    // emp.ph_no=7008581689;
  
    // emp.experience=0;
    // emp.salary=19000.03;
    printf("Enter the employee name \n");
    gets(emp.name);
    printf("Enter the address of the employee \n");
    gets(emp.address);
    printf("Enter the employee number \n");
    scanf("%llu",&emp.ph_no);
    printf("Enter the employee experience \n");
    scanf("%d",&emp.experience);
    printf("Enter the employee salary package \n");
    scanf("%f",&emp.salary);
    employeedetails(emp);
    return 0;
}
void employeedetails(struct employee emp)
{
    printf("Name of employee - %s\n",emp.name);
    printf("Adress of the employee-%s\n",emp.address);
    printf("Employee contact no-%llu\n",emp.ph_no);
    
    printf("Experince holding year - %d years\n",emp.experience);
    printf("Employee salary -%.2f rupees\n",emp.salary);

} 