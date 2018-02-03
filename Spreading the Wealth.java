import java.util.Scanner;
import java.util.Arrays;
public class Main
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int n, i;
        long mean, sum, ans;
        long a[] = new long[1000001];
        long low[] = new long[1000001];
        
        while( in.hasNext() )
        {
            n = in.nextInt();
            sum = 0;
            for(i=0; i<n; i++)
            {
                a[i] = in.nextInt();
                sum += a[i];
            }
            mean = sum / n;
            low[0] = 0;
            for(i=1; i<n; i++)
            {
                low[i] = low[i - 1] + a[i] - mean;
            }
            Arrays.sort(low, 0, n);
            long x = low[n / 2];
            ans  = 0;
            for(i=0; i<n; i++)
            {
                ans += Math.abs(x - low[i]);
            }
            System.out.println(ans);
            
            
        }
        in.close();
    }
}