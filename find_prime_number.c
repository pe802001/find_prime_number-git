#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,a,x,y;
    printf("請輸入起始值(起始值必定小於末值):");
    scanf("%d",&x);
    printf("請輸入末值:");
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
    printf("輸入數值有誤"); 

    
    
    system("pause");
    return 0;
}   
