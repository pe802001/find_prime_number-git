#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,a,x,y;
    printf("�п�J�_�l��(�_�l�ȥ��w�p�󥽭�):");
    scanf("%d",&x);
    printf("�п�J����:");
    scanf("%d",&y); 


    if(y>=x) 
  {
    
    for(i=x;i<=y;i++)
    {
      
      
      for(a=2;a<=i;a++)
      {
      if(i%a==0)
       {
       if(i==2) printf("2 ");  
       break;
       }
              
      else if(i==a+1)
         printf("%d ",i);              
          
          
       }
     }
   }
 

    else 
    printf("��J�ƭȦ��~"); 

    
    
    system("pause");
    return 0;
}   
