import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner in = new Scanner (System.in);
        String temp = new String(); 
        char str[][] = new char[11][11];
        int n, i, j, t, tcase;
        tcase = in.nextInt();
        for(t=1; t<= tcase; t++)
        {
            n = in.nextInt();
            for (i=0; i< n; i++) {
            
                temp = in.next();
                str[i] = temp.toCharArray();
            }
            
            for (i=0; i< n; i++)
            {
                for (j=0; j<n; j++)
                {
                   if (str[i][j] != '.') continue;
                    
                    for (char ch = 'A'; ch <= 'Z'; ch++) 
                    {
                        if (i-1 >=0 && ch == str[i - 1][j]) continue;
                        if (i+1 <n && ch == str[i + 1][j]) continue;
                        if (j-1 >=0 && ch == str[i][j - 1]) continue;
                        if (j+1 <n && ch == str[i][j + 1]) continue;
                        str[i][j] = ch;
                        break;
                    }
                }
            }
            System.out.printf("Case %d:\n",t);
            for (i=0; i< n; i++)
            {
                for (j=0; j<n; j++)
                {
                   System.out.print(str[i][j]);
                }
                System.out.println();
            }
        }
        in.close();
    }
}
