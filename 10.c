// #include<stdio.h>
// int main(){
//   int age;
//   char is_indian;
// printf("Enter Your Age : ");
// scanf("%d",&age);


// printf("Enter your nationality (Y/N): ");
// scanf(" %c",&is_indian);


// if( is_indian == 'Y' && age >=18 && age < 70){
//   printf("You are eligible for a license. \n");
  
// }else{
//   printf("you are not eligible");
// }

// printf("Your age is %d",age);
// return 0;
// }










#include<stdio.h>
int main(){
  char ho_rhi_hai_barish;
  char papa_hai_sath_me;
  char umbrella_bhi_hai;

printf(" hai ho rhi h barish aaj : " );
scanf(" %c",&ho_rhi_hai_barish);


printf("umbrela h pass h me  : ");
scanf(" %c",&umbrella_bhi_hai);


printf(" papa rhege tbhi to jaugi : ");
scanf(" %c",&papa_hai_sath_me);


if(ho_rhi_hai_barish=='Y' && papa_hai_sath_me == 'Y' && umbrella_bhi_hai == 'Y'){
  printf(" school jana hi hoga ");
}else{
  printf(" nhi jana h school : ");
}
return 0;


}