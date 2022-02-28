#include <stdio.h>
#include <windows.h>

int main()
{
   int h,m,s;
   int d=1000;

   printf("Set time : \n");
  scanf("%d",&h);
  scanf("%d",&m);
  scanf("%d",&s);

   if(h>24 || m>60 || s>60){
    printf("Error !");
    exit(0);
   }

   while(1){
    s++;
    if(s>59)
    {
      m++;
      s=0;
    }
    if(m>59){
        h++;
        m=0;
    }
    if(h>24)
        {
        h=1;

        }
        printf("\n Clock :\n");
        printf("     %s",__DATE__);
        printf("\n\n %02d : %02d : %02d",h,m,s);
        printf("\n\n   I watch");
        sleep(d);
      system("cls");
   }
    return 0;
}
