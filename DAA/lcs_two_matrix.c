#include <stdio.h>
#include <string.h>
int m,n,c[20][20];
char b[20][20];
void algo(char *s1,char *s2)
{
    m = strlen(s1);
    n = strlen(s2);
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
}
void print_table()
{
    for ( int i=0; i<= m; i++)
    {
         for (int j=0; j<= n; j++) 
         {
              printf("%d\t",c[i][j]);
         }
         printf("\n");
    }
    printf("B matrix\n");
     for ( int i=1; i<= m; i++)
    {
         for (int j=1; j<= n; j++) 
         {
              printf("%c\t",b[i][j]);
         }
         printf("\n");
    }
}
void print_lcs(char *s1, char *s2)
{
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
    printf("LCS: %s\n", lcs);
}
int main()
{
    char s1[20],s2[20];
    printf("Enter the two strings\n");
    gets(s1);
    gets(s2);
   printf("LCS Table:\n");
    algo(s1,s2);
    print_table();
    printf("\n");
    print_lcs(s1,s2);
    printf("Length of lcs:%d\n",c[m][n]);
    return 0;
}
