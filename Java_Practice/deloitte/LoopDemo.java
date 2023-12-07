package deloitte;

public class LoopDemo {

	public static void main(String[] args) {
		
		//int i=0;
		
        /*for(;i<10;)
		{
			System.out.println("Hi");
			i++;
		}
        */
         //for(;;)
        //;//infinite
        /* 
        int a[]={ 1,2,3,4,5,6,7};
        for(i=0;i<a.length;i++)
        System.out.print(a[i]+" ");
        System.out.println();
        for (int  j : a) {
            System.out.println(j);
            
        }

        int k=1;
        for(i=1;i<=5;i++)
        {
            
            for(int j=1;j<=i;j++)
            {
                
                System.out.print(k+" ");
                k++;
            }
            System.out.println();
        }*/
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=5;j++)
            {
                if( i==1 || j==1||i==4||j==5)
                System.out.print("1");
                else
                System.out.print("0");
            }
            System.out.println();
        }
        aa:
        for(int i=1;i<=3;i++)
        {
            bb:
            for (int j=1;j<=3;j++)
            {
                if(i==2&&j==2)
                break aa;
            
            System.out.println( i+" "+j);
            }
        }
        int i=1;
        while(i<=10){
        System.out.println(i+"*2="+i*2);
        i++;
        }
        /* 
        while(true)
        {
            System.out.println("hek");
        }*/
        
        i=0;
        do{
            System.out.println(i);
            i++;
        }while(i<10);
        
        
	}
}
