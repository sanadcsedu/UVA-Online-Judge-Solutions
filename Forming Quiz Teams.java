import java.text.DecimalFormat;
import java.util.Scanner;
import java.util.Arrays;
/**
 *
 * @author sanad_csedu
 */
public class Main {

    public static void main(String[] args) {
        
        Scanner in = new Scanner (System.in);
        task solver = new task();
        solver.solve(in);
    }
}
class  task
{
    double dis[][] = new double [20][20];
    double dp[] = new double [ 1 << 16 ];
    int n;
    int max;
    public void solve(Scanner in)
    {
        String str = new String();
        int t = 1;
        int x[] = new int [20];
        int y[] = new int [20];
        while(true)
        {
            n = in.nextInt();
            if(n == 0) break;
            max = (1<<(2*n))-1;
            for (int i = 0; i < 2*n ; i++) {
               
                str = in.next();
                x[i] = in.nextInt();
                y[i] = in.nextInt();
            }
            
            for (int i = 0; i < 2*n; i++) {
                for (int j = i+1 ; j < 2 * n; j++) {
                    dis[i][j] = dis[j][i] = Math.sqrt( (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) );
                }
            }
            Arrays.fill(dp, -1);
            double ans = bitmask(0);
            DecimalFormat df = new DecimalFormat("#.00");
            System.out.println("Case " + t + ": " + df.format(ans));
            t++;
        }
    }
    
    private double bitmask(int mask)
    {
        if(max == mask) return 0;
        
        else if(dp[mask] != -1) return dp[mask];
        else
        {
            double ret = 1 << 30;

            for (int i = 0; i < 2*n ; i++) {

                if(check(mask, i) == 0)
                {
                    for (int j = i+1 ; j < 2 * n; j++) {

                        if(check(mask, j) == 0)
                        {
                            ret = Math.min(ret, dis[i][j] + bitmask(mask|(1<<i)|(1<<j)));
                        }
                    }
                }
            }
            return dp[mask] = ret;
        } 
    }
    public int check(int mask, int k )
    {
	return  mask & (1 << k); 
    }
    public int set(int mask, int k)
    {
	return mask | (1 << k);
    }
}
