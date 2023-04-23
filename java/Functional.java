import java.util.function.Function;
import java.util.function.Consumer;

public class Functional {
        Function<Double, Double> sqrt = (value) -> Math.sqrt(value);
        Consumer<String> printMessage = System.out::println;

        public static void main(String[] args)
        {
                Functional funcJava = new Functional();

                funcJava.printMessage.accept("Functional Programming in Java");

                funcJava.printMessage.accept("sqrt of 4.0 is " + funcJava.sqrt.apply(4.0));

        }
}
