//package AGTC;
import java.util.*;
public class Main
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		TaskA solver = new TaskA();
		solver.solve(in);
	}
}
class TaskA
{
	int n, m;
	String a = new String();
	String b = new String();
	int dp[][] = new int [1100][1100];
	public void solve(Scanner in)
	{
		while(in.hasNext())
		{
			n = in.nextInt();
			a = in.next();
			m = in.nextInt();
			b = in.next();
			for(int i=0; i<=n; i++)
				Arrays.fill(dp[i], - 1);
			System.out.println(f(n-1, m-1));
		}
	}
	public int f(int i, int j)
	{
		if(i<0 || j<0)
		{
			if(i<0) return (j+1);
			else return (i+1);
			
		}
		if(dp[i][j] != -1) return dp[i][j];
		int ret1, ret2, ret3;
		ret1 = 1 + f(i-1, j);
		ret2 = 1 + f(i, j-1);
		ret3 = ( a.charAt(i) == b.charAt(j)) ? f(i-1, j-1) : 1+f(i-1, j-1);
		dp[i][j] = Math.min(ret1, Math.min(ret2, ret3));
		
		return dp[i][j];
		
	}
}