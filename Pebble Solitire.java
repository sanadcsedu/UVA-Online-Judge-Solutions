package pebble;

import java.util.Scanner;
import java.util.Arrays;

public class pebble 
{
	public static void main(String args[])
	{
		Scanner input = new Scanner (System.in);
		bitmask solver = new bitmask();
		solver.solve(input);
		
	}
}
class bitmask
{
	int dp[] = new int[1 << 12 + 2];
	public void solve(Scanner in)
	{
		int t, tcase;
		tcase = in.nextInt();
		for(t=1; t<= tcase; t++)
		{
			String str = new String();
			str = in.next();
			int m = 0;
			for(int i=0; i< str.length() ; i++)
			{
				if(str.charAt(i) == 'o')
					m = set(m, i);
			}
			Arrays.fill(dp, -1);
			System.out.println(f(m));
		}
	}
	private int f(int mask)
	{
		if(dp[mask] != -1 )return dp[mask];
		int ret =0 , i, temp;
		
		for(i=0; i<12; i++)
			if(check(mask, i) != 0) ret++;
		
		for(i=0; i<12; i++)
		{
			if(ok(i) && ok(i-1) && ok(i-2) && check(mask, i) !=0 && check(mask, i-1)!=0 && check(mask, i-2)==0)
			{
				temp = mask; 
				temp = reset(temp ,i);
				temp = reset(temp ,i-1);
				temp = set(temp ,i-2);
	            ret = Math.min(ret , f(temp));
			}
			if(ok(i) && ok(i+1) && ok(i+2) && check(mask, i)!=0 && check(mask, i+1)!=0 && check(mask, i+2)==0)
			{
				temp = mask; 
				temp = reset(temp ,i);
				temp = reset(temp ,i+1);
				temp = set(temp ,i+2);
	            ret = Math.min(ret , f(temp));
			}
		}
		return dp[mask] = ret;
	}
	private int reset(int mask, int k )
	{
		return mask &  ~(1 << k) ;
	}
	private boolean ok(int x)
	{
		return (x >= 0 && x < 12);
	}
	private int set(int mask, int k)
	{
		return mask | (1 << k );
	}
	private int check(int mask, int k)
	{
		return mask & (1 << k);
	}
}