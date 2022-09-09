public class Factorial {

  Factorial() {
  }

  public static void main(String[] args) {
    Factorial fact = new Factorial();
    System.out.println("Recursive: " + fact.recursive(5));
    System.out.println("Iterative: " + fact.iterative(6));
    System.out.println("\n 20DCE063 -> Nabhag Motivaras");
  }

  int recursive(int n) {

    if (n <= 1) {
      return 1;
    }
    return n * recursive(n - 1);
  }

  int iterative(int n) {

    int result = 1;

    for (int i = 2; i <= n; i++) {
      result *= i;
    }
    return result;
  }
}