public class Fibonacci {

  Fibonacci() {
  }

  public static void main(String[] args) {
    Fibonacci fib = new Fibonacci();
    System.out.println("Recursive: " + fib.recursive(5));
    System.out.println("Iterative: " + fib.iterative(6));
    System.out.println("\n 20DCE063 -> Nabhag Motivaras");
  }

  int recursive(int n) {
    if (n == 0) {
      return 0;
    } else if (n == 1) {
      return 1;
    }
    return recursive(n - 1) + recursive(n - 2);
  }

  int iterative(int n) {

    int previousNumber0 = 0, previousNumber1 = 0, currentNumber = 1;
    for (int i = 1; i < n; i++) {
      previousNumber0 = previousNumber1;
      previousNumber1 = currentNumber;
      currentNumber = previousNumber0 + previousNumber1;
    }
    return currentNumber;
  }

}