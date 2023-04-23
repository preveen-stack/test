import java.util.function.Function;

public class Temperature {
	Function<Double, Double> sqrt = (value) -> Math.sqrt(value);
	Function<Double, Double> f = (c) -> 9.0 * c / 5.0 - 32.0;
	Function<Double, Double> c = (f) -> 5.0 * ( f - 32.0 ) / 9.0;

	public static void main(String[] args)
	{

		System.out.println("Functional Programming in Java");
		System.out.println("-40 deg C -> " + sqrt(new Double(-40.0)) + " deg F");
		System.out.println("-40 deg F -> " + c(-40.0) + " deg C");

	}
}
