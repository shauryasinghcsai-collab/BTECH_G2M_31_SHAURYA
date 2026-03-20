#include <stdio.h>

int main()
{
  int a[100];
  int i,n,sc,loc=-1;
  printf("enter size of arrray <=100:");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("enter elements to be searched \t");
  scanf("%d",&sc);
  
  for(i=0;i<n;i++)
  {
      if(a[i]==sc)
      {
          loc=i;
      break;
      }
}
      if (loc!=-1)
      {
      printf(" found");
  }
      else{
          printf("not found");
      }
        return 0;
     }