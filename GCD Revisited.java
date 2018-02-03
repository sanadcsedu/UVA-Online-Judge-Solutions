import java.util.Scanner;
import java.math.BigInteger;

public class GCD {

	public static void main(String[] args) {
		Scanner input = new Scanner (System.in);
		int tcase = input.nextInt();
		BigInteger a , b, res;
		for(int t=1; t<= tcase; t++)
		{
			a = input.nextBigInteger();
			String vua = input.next();
			b = input.nextBigInteger();
			
			getgcd obj;
			obj = new getgcd();
			res = obj.ret(a, b);
			System.out.println(a.divide(res) + " / " + b.divide(res));			
		}
	}
}
class getgcd
{
	BigInteger ans;
	BigInteger ret(BigInteger a, BigInteger b)
	{
		ans = a.gcd(b); 
		return ans;
	}
}