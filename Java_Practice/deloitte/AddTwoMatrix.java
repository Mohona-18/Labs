package deloitte;

public class AddTwoMatrix {
    public static void main(String[] args) {
        int a[][]=new int[][]{{1,2},{3,4}};
        int b[][]=new int[][]{{1,2},{3,4}};
        int d[][]=multiply(a, b);
        display(d);
        //int c[][]=add(a,b);
        //display(c);
    }
    static void display(int c[][])
    {
           for(int i=0;i<c.length;i++)
        {
            for(int j=0;j<c[0].length;j++)
            System.out.print(c[i][j]+" ");
            System.out.println();
        }
    }
    static int[][] multiply(int a[][],int b[][])
    {
        int c[][]=new int[a.length][b[0].length];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j <b[0].length; j++) {
                for (int k = 0; k < b.length; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        return c;
    }


 static int[][] add(int a[][], int b[][])
    {
        int c[][]=new int[a.length][a[0].length];
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[0].length;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        return c;
    }
}