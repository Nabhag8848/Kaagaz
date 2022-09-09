import java.util.Arrays;

public class Matrix {

  private int orderOfMatrix;

  Matrix(int order) {
    this.orderOfMatrix = order;
  }

  int[][] addition(int A[][], int B[][]) {
    int C[][] = new int[orderOfMatrix][orderOfMatrix];

    for (int i = 0; i < orderOfMatrix; i++) {
      for (int j = 0; j < orderOfMatrix; j++) {
        C[i][j] = A[i][j] + B[i][j];
      }
    }

    return C;
  }

  int[][] multiplaction(int A[][], int B[][]) {
    int C[][] = new int[orderOfMatrix][orderOfMatrix];

    for (int i = 0; i < orderOfMatrix; i++) {
      for (int j = 0; j < orderOfMatrix; j++) {
        C[i][j] = 0;
        for (int k = 0; k < orderOfMatrix; k++) {
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }

    return C;
  }

  public static void main(String[] args) {

    int A[][] = { { 1, 1, 1, 1 },
        { 2, 2, 2, 2 },
        { 3, 3, 3, 3 },
        { 4, 4, 4, 4 } };

    int B[][] = { { 1, 1, 1, 1 },
        { 2, 2, 2, 2 },
        { 3, 3, 3, 3 },
        { 4, 4, 4, 4 } };

    Matrix mat = new Matrix(4);
    System.out.println("Addtion:" + Arrays.deepToString(mat.addition(A, B)));
    System.out.println();
    System.out.print("Multiplication: " + Arrays.deepToString(mat.multiplaction(A, B)));
    System.out.println();
    System.out.println("\n 20DCE063 -> Nabhag Motivaras");

  }
}
