import java.util.Scanner;

public class Subset {
    public static void printSubsetSums(int[] arr, int sum) {
        printSubsetSums(arr, sum, 0, "NotNeeded");
    }

    public static void printSubsetSums(int[] arr, int sum, int i, String acc) {

        boolean isAnySubsetPossible = false;
        int n = arr.length;

        for (int p = 0; p < (1 << n); p++) {
            int[] temporaryArray = new int[n];
            int k = 0;
            int m = 1; 
           
            for (int j = 0; j < n; j++) {
                if ((p & m) > 0) {
                    temporaryArray[k++] = arr[j];
                }
                m = m << 1;
            }

            int localSum = 0;
            for (int temp : temporaryArray) {
                localSum += temp;
            }
            if (localSum == sum) { 
                isAnySubsetPossible = true;
                for (int item : temporaryArray) {
                    if (item > 0) {
                        System.out.print(item + " ");
                    }
                }

                System.out.println();
            }
        }
        if (!isAnySubsetPossible) {
            System.out.println("There is no subset possible for the sum = " + sum);
        }
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int[] arr = {1, 2, 5, 6, 8};

        System.out.println("Enter a target sum");
        int sum = sc.nextInt();
        printSubsetSums(arr, sum);
        sc.close();
    }
}