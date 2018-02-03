import java.util.Scanner;
import java.math.*;

public class Main {

	public static void main(String args[])
	{
		Scanner input = new Scanner (System.in);
		int i, n, m, t, z;
		int a[] = new int [10005];
		while(input.hasNext())
		{
			n = input.nextInt();
			m = input.nextInt();
			t = input.nextInt();
			
			for(i=0 ; i < 10003; i++)
				a[i] = 0;
			
			if(m > n )
			{
				z = m;
				m = n;
				n = z;
			}
			a[n] = a[m] = 1;
			
			for(i = m ; i<= t-m ; i++)
			{
				if(a[i] > 0 )
				{
					a[i + m] = Math.max(a[i+m] , a[i] + 1);
				}
				
			}
			for(i = n ; i<= t-n ; i++)
			{
				if(a[i] > 0 )
				{
					a[i + n] = Math.max(a[i+n] , a[i] + 1);
				}
				
			}
			
			if(a[t] > 0)System.out.println(a[t]);
			else
			{
				boolean flag = false;
				for(i=t-1; i>=0; i--)
				{
					if(a[i] > 0 )
					{
						flag = true;
						int ans = t-i;
						System.out.println(a[i] + " " + ans);
						break;
					}	
				}
				if(!flag)System.out.println(0 + " " + t);
			}
		}	
		input.close();
	}
}
