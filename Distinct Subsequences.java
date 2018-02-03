import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;
public class Main
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		//BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		//int tcase = Integer.parseInt(bf.readLine());
		int tcase = in.nextInt();
		int t, i, j;
		for(t=0; t< tcase; t++)
		{
			String a = in.next();
			String b = in.next();
			BigInteger z[][] = new BigInteger[a.length()+1][b.length()+1];
			for(i=0; i<= a.length(); i++)
			{
				for(j=0; j< b.length(); j++)
				{
					z[i][j] = BigInteger.ZERO;
				}
				z[i][b.length()] = BigInteger.ONE;
			}
			for (i = a.length() - 1; i >= 0; i--)
	            for (j = b.length() - 1; j >= 0; j--)
	            {
	                z[i][j] = z[i + 1][j];
	                if (a.charAt(i) == b.charAt(j))
	                    z[i][j] = z[i][j].add(z[i + 1][j + 1]);
	            }
	        System.out.println(z[0][0]);
			
		}
		
		
	}
}