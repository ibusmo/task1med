include"stdio.h"
#include"string.h"
main()
{
      int l,n,i,j,tmp=0;
      scanf("%d%d",&l,&n);
      char arr[2][1001]
      for(i=0;i<n;i++)

      {
	 scanf("%s",arr[1]); 

          if(i>0)

          { 

              tmp=0;

              for(j=0;j<l;j++)

              {

                   if(arr[0][j]!=arr[1][j]) 

                     tmp++; 

              }

          }    

          if(tmp>2)

             break;       

          strcpy(arr[0],arr[1]);  

      }   

      printf("%s",arr[0]);

      

//getch();
}
