#include <stdio.h>

int main()
{
while(1) {
 int i,n,faktoriyel=1;
 
    printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz:");
    scanf("%d",&n);
 if(n<0)
    printf("Negatif sayıların faktoriyeli tanımsızdir");
 
 else
 {
 for(i=1;i<=n;i++)
 {
    faktoriyel *=i;
    
 }
    printf("%d! = %d\n",n,faktoriyel);
 }
 } return 0;
 }