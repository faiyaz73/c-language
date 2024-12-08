// Nested if   

#include<stdio.h>
int main(){
  int age;
  char is_indian;
printf("Enter Your Age : ");
scanf("%d",&age);


printf("Enter your nationality (Y/N): ");
scanf(" %c",&is_indian);

if(is_indian == 'Y')

{
  if(age < 18){
  printf("you eligible :\n" );
}else if(age > 70){
  printf("you are a senior , you can not apply anymore\n");
}else{
  printf("You are eligible for a licenses\n");
}
}








}