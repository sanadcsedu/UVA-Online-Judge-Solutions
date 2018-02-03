import java.io.IOException;
import java.util.InputMismatchException;
import java.io.InputStream;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		InputStream inputStream = System.in;
		InputReader in = new InputReader(inputStream);
		TaskA solver = new TaskA();
		solver.solve(in);
	}
}

class TaskA {
    public void solve(InputReader in)
    {
        int n, m, i, cnt, ans, j;
        int dragon[] = new int[20002];
        int knight[] = new int[20002];
        
        while(true)
        {
            n = in.readInt();
            m = in.readInt();
            
            if(n==0 && m==0) break;
            
            for(i=0; i<n; i++)
                dragon[i] = in.readInt();
            
            for(i=0; i<m ; i++)
                knight[i] = in.readInt();
            
            Arrays.sort(dragon, 0, n);
            Arrays.sort(knight, 0, m);
         
            ans = 0;
            for(i=0, j=0 ; i<m && j<n ; i++)
            {
                if(dragon[j] <= knight[i] )
                {
                    ans += knight[i];
                    j++ ;
                }
            }
            if(j == n)System.out.println(ans);
            else System.out.println("Loowater is doomed!");
            
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

