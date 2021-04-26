#include<stdio.h>
int main()
{ 
    int a;
printf("Following menu available:1.Pizza Rs239\n 2.Burger Rs129\n 3.Pasta Rs179\n 4.French Fries Rs99\n 5.Sandwich Rs149");
printf("enter any number between 1 to 5\n");
 scanf("%d",&a);
 switch(a)
 {
     case 1:
     printf("food item-1.Pizza\n price - Rs239");
     break;
     case 2:
     printf("food item-2.Burger\n price - Rs129");
     break;
     case 3:
     printf("food item -3.Pasta \n price - Rs179");
     break;
     case 4:
     printf("food item -4.French\n price - Fries Rs99");
     break;
     case 5:
     printf(" food item-5.Sandwich\n price - Rs149");
     break;
     default:
     printf("invalid choice please type the number between 1 to 5 only ");
     break;
 }
 
}
 
