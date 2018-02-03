import java.util.Scanner;

public class Main {

	long a[][] = new long[105][105];
	boolean flag[][] = new boolean[105][105]; 
	int w, h; 
	public void main(String[] args)
	{
		int i, u, v, n;
		Scanner input = new Scanner (System.in) ;
		for(;;)
		{
			w = input.nextInt();
			h = input.nextInt();
			if(w==0 && h==0)break;
			reset();
			n = input.nextInt();
			for(i=0; i<n; i++)
			{
				u = input.nextInt();
				v = input.nextInt();
				flag[u][v] = false;
			}
			dp(0, 0);
			System.out.println(a[w][h]);
		}
		
	}
	public void reset()
	{
		int i, j;
		for(i=0; i<102; i++)
			for(j=0; j<102; j++)
			{
				a[i][j] = -1;
				flag[i][j] = true; 
			}
	}
	public long dp(int p, int q)
	{
		if(flag[p][q])
		{
			if(p == w && q == h) return a[p][q] = 1;
			if(a[p][q] != -1)return a[p][q];
			else
			{
				if(p == w) return a[p][q] = dp(p, q+1);
				else if(q == h)return a[p][q] = dp(p+1, q);
				else return a[p][q] = dp(p+1, q) + dp(p, q+1);
			}
			
		}
		return 0;	
	}
}
