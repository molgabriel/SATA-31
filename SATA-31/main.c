#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=100;
    int tmb[100];
    int a;
    int max=-22222222;
    int min=222222222;

      for(k=100; k<9999999; k++)
      {
          if(k%43==0 && k%37==0) break;
      }

      for(a=0;a<100;a++)
      {
          tmb[a]=k;
          k+=43*37;

          printf("%d\t",tmb[a]);

      }

    for(a=0; a<100; a++)
    {
        if(tmb[a]%3==0){

                max=max>tmb[a]?max:tmb[a];
        }

        min=min<tmb[a]?min:tmb[a];
    }


    printf("\n");
    printf("legnagyobb harommal oszthato: %d\n",max);
    printf("\nMasodik legkisebb: %d\n",tmb[1]);

    return 0;
}

