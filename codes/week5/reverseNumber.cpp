#include <stdio.h>

int main(){

int n;
printf("Enter the value of n:\n");
scanf("%d",&n);

int ans = 0;

while(n!=0){
  int rem = n%10 ;
  ans = rem + ans*10 ;
   n/=10 ;
}

printf("Output : %d",ans);

}