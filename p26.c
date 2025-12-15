#include<stdio.h>
#include<math.h>
void trianglr();
void input_sides();
void validate();
int area();
int a,b,c;
float s,Area,result;
void main()
{
    input_sides();
}

   void input_sides()
   {

    printf("\nEnter the lenght of 1st side : ");
    scanf("%d",&a);
    printf("\nEnter the lenght of 2nd side : ");
    scanf("%d",&b);
    printf("\nEnter the lenght of 3rd side : ");
    scanf("%d",&c);
    validate();
   }
   void validate()
   {
       if(a>0 && b>0 && c>0)
       {


        if((a+b)>c && (a+c)>b && (b+c)>a)
        {
            printf("Valid Triangle");
            area();
            printf("Area is : %f",result);
        }
        else
        {
            printf("The given lengths do not form a valid triangle");
        }
       }
       else
       {
           printf("Sides lengths must be positive number");
       }
   }
   int area()
   {
       s=(a+b+c)/2;
       Area = (s*(s-a)*(s-b)*(s-c));
       result = sqrtf(Area);
       return result;
   }
