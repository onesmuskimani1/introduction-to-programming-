// c program to find grades of students
#include<stdio.h>
main()
{
int bio,chem,phy;
int avg;
    
    printf("\n enter marks for bio :");
    scanf("%d",&bio);
    printf("\nenter marks for chem :");
    scanf("%d",&chem);
    
    printf("\nenter marks for phy :");
    scanf("%d",&phy);
    if(bio>=0 && bio<=100 && chem>=0 && chem<=100 && phy>=0 && phy<=100)
    {
    avg =(bio+chem+phy)/3;
    printf("\n the avg is %d",avg);
    if(avg>=70 && avg<=100)
    {
    printf("\n grade A"); 
    }
    else if(avg>=60 && avg<=69)
    {
    printf("\n grade B");
    }
    else if (avg>=50 && avg<=59)
    {
    printf("\n grade C");
    }
    else if(avg>=40 && avg<=49)
    {
    printf("\n grade D");
    }
    else if(avg>=0 && avg<=39)
    {
    printf("\n fail");
    }
    }
    else
    {
    printf("\n enter the correct marks");
    }
    
   
}