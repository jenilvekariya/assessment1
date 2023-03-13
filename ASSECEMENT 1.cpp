#include <stdio.h>

int main()
{
   
    int number,b,c,addition,subtraction,multiplication,division;;
    
    
    do
       {
        printf("\n\n\t\t CALCULATOR");
        printf("\n\n\t\t *MENU*");
        printf("\n\n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION ");
           
       
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d",&number);
        
        switch(number)
        {
            case 1:
                printf("\nENTER FRIST NUMBER : ");
                scanf("%d",&b);
                
                printf("\nENTER SECOND NUMBER : ");
                scanf("%d",&c);
                
                addition=b+c;
                printf("\nADDITION : %d",addition);
                break;
                
            case 2:
                printf("\nENTER FRIST NUMBER : ");
                scanf("%d",&b);
                
                printf("\nENTER SECOND NUMBER : ");
                scanf("%d",&c);
                
                subtraction=b-c;
                printf("\nSUBTRACTION : %d",subtraction);
                break;
            case 3:
                
                printf("\nENTER FRIST NUMBER : ");
                scanf("%d",&b);
                
                printf("\nENTER SECOND NUMBER : ");
                scanf("%d",&c);
                
                multiplication=b*c;
                printf("\nMULTIPLICATION : %d",multiplication);
                break;
            case 4:
                
                printf("\nENTER FRIST NUMBER : ");
                scanf("%d",&b);
                
                printf("\nENTER SECOND NUMBER : ");
                scanf("%d",&c);
                
                division=b/c;
                printf("\nDIVISION : %d",division);
                break;
                
            default:
            
                printf("\n \n\t INVAILD CHOICE !!!!");
                break;
                
        }
    }
    while(number!=5);
}
