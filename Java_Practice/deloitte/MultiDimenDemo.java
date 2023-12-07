package deloitte;

public class MultiDimenDemo {
    public static void main(String[] args) {
    int rows=2;
    int cols=2;
    int arr[][]=new  int[rows][cols];
    
    int a[][]=new int[2][2];
    a[0][0]=1;
    a[0][1]=2;
    a[1][0]=3;
    a[1][1]=4;
        System.out.println(a[0].length);
        for(int[] i :a)
        {
            for(int j:i)
            System.out.print(j);
            System.out.println();
        }
    }
}
