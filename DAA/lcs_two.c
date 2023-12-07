#include <stdio.h>
#include <string.h>
int m,n;
void algo(char *s1,char *s2)
{   
    m = strlen(s1);
    n = strlen(s2);
    int c[m+1][n+1],b[m+1][n+1];
  for (int i = 0; i <= m; i++)
      {  c[i][0] = 0;b[i][0]='0';}
  for (int i = 0; i <= n; i++)
      {  c[0][i] = 0; b[0][i]='0';}
  for ( int i=1; i<= m; i++)
    for (int j=1; j<= n; j++) 
    {
      if (s1[i-1] == s2[j - 1])
       {
        c[i][j] =c[i-1][j-1] + 1;
        b[i][j]='D';
      } 
      else if (c[i-1][j] >=c[i][j-1]) 
      {
        c[i][j] =c[i-1][j];
        b[i][j]='U';
      }
       else 
       {
        c[i][j] = c[i][j - 1]; b[i][j]='L';
      }
    }
    printf("LCS Table\n");
    for ( int i=0; i<= m; i++)
    {
         for (int j=0; j<= n; j++) 
         {
              printf("%d\t",c[i][j]);
         }
         printf("\n");
    }
    printf("\nB matrix\n");
     for ( int i=1; i<= m; i++)
    {
         for (int j=1; j<= n; j++) 
         {
              printf("%c\t",b[i][j]);
         }
         printf("\n");
    }


    int index = c[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

     int i = m, j = n;
     while (i > 0 && j > 0) 
     {
    if (b[i][j]=='D')
     {
      lcs[index-1]=s1[i - 1];
      i--;
      j--;
      index--;
    }
    else if (b[i][j]=='U')
      i--;
    else
      j--;
  }
    printf("\nLCS: %s\n", lcs);
    printf("\nLength of LCS:%d\n",c[m][n]);
}
int main()
{
    char s1[20],s2[20];
    printf("Enter the two strings\n");
    gets(s1);
    gets(s2);
    printf("\n");
    algo(s1,s2);
    return 0;
}
