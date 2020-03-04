import java.util.Scanner;

/**
 * @author Mohamed Huzien
 */
public class A {

	public static void main(String[] args) {
		

		Scanner scanner = new Scanner(System.in);
		Integer n =  scanner.nextInt();
		Integer x = scanner.nextInt();
		
		Integer occur = 0;
		for(Integer i = 1; i <= n ; i++)
		{
			if(x%i == 0 && x/i <= n) {
				occur++;
			}
		
		}
		
		System.out.println(occur);

	}

}

