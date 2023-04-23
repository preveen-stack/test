object HelloWorld {
  def main(args: Array[String]): Unit = {
    println("Hello, Scala World!")
    println("func1 is : " + func1(10));
    println("func2 is : " + func2(10));
    println("-40 deg c is "+ toTempF(-40.0) + " deg F");
    println("-40 deg f is " + toTempC(-40.0) + " deg C");
  }

    def func1(a : Int) : Int = a + 1;
    def func2(a : Int) : Int = {
        return a * 2;
    }
    def toTempF(c : Double) : Double = (9.0/5.0 * c)  + 32.0;
    def toTempC(f : Double) : Double = ( f - 32.0) * 5.0 / 9.0; 
}
