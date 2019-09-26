#include <stdio.h>
#include <stdlib.h>

int main()
{
  int base[100],limit[100],process[100],temp[100],i,n,m;
  printf("ENTER THE NUMBER OF PROCESS:\n");
  scanf("%d",&n);
  printf("ENTER THE PROCESS,BASE,LIMIT:\n");
  for(i=1;i<=n;i++){
    scanf("%d%d%d",&process[i],&base[i],&limit[i]);
    temp[i]=base[i]+limit[i];
  }
  for(i=1;i<=n;i++){
    printf("ENTER THE PROCESS WITH MEMORY SIZE:\n");
    scanf("%d%d",&process[i],&m);
      if(m>=base[i]){
        if(m<temp[i])
            printf("Accepted\n");
        else
           printf("Not Accepted\n");
        }
      else
        printf("Trap");
     }

     return 0;
}
