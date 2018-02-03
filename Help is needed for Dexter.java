import java.util.Scanner;


public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner (System.in);
        int n;
        while(in.hasNext())
        {
            n = in.nextInt();
            int c = 0;
            while(n != 0)
            {
                c ++;
                n /= 2;
            }
            System.out.println(c);
        }
        in.close();
    }
}
