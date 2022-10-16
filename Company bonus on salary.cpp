#include<stdio.h>
#include<string.h>
main()
{
    int i,j;
    float salary,bonus;
    char grade;
    printf("Enter Grade A or B: ");
    scanf("%c",&grade);
    printf("Enter Salary: ");
    scanf("%f",&salary);
    if(grade=='A' || grade=='a')
    {
        if(salary>10000)
            bonus=(float)(salary*0.05);
        else
            bonus=(float)(salary*0.07);
    }
    if(grade=='B' || grade=='b')
    {
        if(salary>10000)
            bonus=(float)(salary*0.1);
        else
            bonus=(float)(salary*0.12);
    }
    salary+=bonus;
    printf("Bonus=%.2f\nSalary=%.2f\n",bonus,salary);
}
