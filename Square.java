package Square;
import java.io.IOException;
import java.io.InputStream;
import java.util.InputMismatchException;
import java.util.Arrays;

class Square
{
	public static void  main(String args[]) {
		
		InputStream inputstream = System.in;
		InputReader in = new InputReader(inputstream);
		bitmask solver = new bitmask();
		solver.solve(in);
	}
}
class bitmask
{
	int a[] = new int[21];
	int dp[][] = new int [4][1 << 20];
	int n, len;
	public void solve(InputReader in)
	{
		int t, tcase, sum;
		tcase = in.readInt();
		for(t=0; t<tcase; t++)
		{
			n = in.readInt();
			sum = 0;
			for(int i=0; i<n; i++)
			{
				a[i] = in.readInt();
				sum += a[i];
			}
			if(sum % 4 == 0)
			{
				reset();
				len = sum / 4;
				if(f(0,0, 0) == 1)
				{
					System.out.println("yes");
				}
				else
				{
					System.out.println("no");
				}
			}
			else
			{
				System.out.println("no");
			}
						
		}
		
	}
	public int calculation(int mask, int arm)
	{
		int s = 0, i;
		for(i=0; i<n; i++)
		{
			if(check(mask, i) == 1)
			{
				s += a[i];
			}
		}
		return s - len * arm;
		
	}
	public void reset()
	{
		int i;
		for(i=0; i<4; i++)
		{
			Arrays.fill(dp[i], -1);
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
	public int f(int mask, int arm, int l)
	{
		int i, ret  = 0 ;
		if(arm == 4) return 1;
		else if(l == len) return f(mask, arm + 1, 0);
		else if(dp[arm][mask] != -1) return dp[arm][mask];
		else
		{
			for(i=0; i<n && ret != 1 ; i++)
			{
				if(check(mask, i) == 0 && l + a[i] <= len)
				{
					ret |= f(set(mask, i) , arm, l + a[i] );
				}
			}			
			return dp[arm][mask] = ret;
		}	
	}
}
class InputReader {

    private InputStream stream;
    private byte[] buf = new byte[1024];
    private int curChar;
    private int numChars;

    public InputReader(InputStream stream) {
        this.stream = stream;
    }

    public int read() {
      
    	if (numChars == -1)
            throw new UnknownError();
        if (curChar >= numChars) {
            curChar = 0;
            try {
                numChars = stream.read(buf);
            } catch (IOException e) {
                throw new UnknownError();
            }
            if (numChars <= 0)
                return -1;
        }
        return buf[curChar++];
    }

    public int readInt() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        } else if (c == '+') {
            c = read();
        }
        int res = 0;
        do {
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }

    public long readLong() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        long res = 0;
        do {
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }

    public static boolean isSpaceChar(int c) {
        return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }

}