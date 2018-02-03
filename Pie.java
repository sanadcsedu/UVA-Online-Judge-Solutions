import java.io.IOException;
import java.io.InputStream;
import java.text.DecimalFormat;
import java.util.*;

public class Main {
    public static void main(String[] args) {

        InputStream inputstream = System.in;
        InputReader in = new InputReader((inputstream));
        task solver = new task();
        solver.solve(in);
    }
}
class task
{
    int n, f;
    double vol[] = new double[10005];
    double pi = Math.acos(-1.00);
    double EPS = 0.00001;
    public void solve(InputReader in)
    {
        int t,tcase, i, z;
        double max;
        tcase = in.readInt();
        for ( t = 1; t <= tcase ; t++) {
            
            n = in.readInt();
            f = in.readInt();
            f += 1;
            max = -1;
            for(i=0; i<n; i++)
            {
                z = in.readInt();
                vol[i] = pi * z * z;
                max = Math.max(max, vol[i]);
            }
            double high, low , mid, ans;
            ans = -1.0;
            high = max;
            low = 0.0;
            while(high-low > EPS)
            {
                mid = (high + low) / 2.0;
                if(check(mid))
                {
                    ans = Math.max(ans, mid);
                    low = mid;
                }
                else high = mid;
            }
            DecimalFormat df = new DecimalFormat ("#.0000");
            System.out.println(df.format(ans));
        }
    }
    public boolean check(double x)
    {
        int i, sum = 0;
        for(i=0; i<n; i++)
        {
            sum += (vol[i] / x);
        }
        return sum >= f;
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
        // InputMismatchException -> UnknownError
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

