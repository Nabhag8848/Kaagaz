import java.lang.Math;
import java.util.Scanner;

public class GuessNumber {

    public static final String ANSI_RESET = "\u001B[0m";
    public static final String ANSI_YELLOW = "\u001B[33m";
    public static final String ANSI_RED = "\u001B[31m";
    public static final String ANSI_BLUE = "\u001B[34m";
    public static void main(String[] args) {
        
        //Generating Number in Range:
        int from = 1, to = 1000;

        int randomNumber = (int) (Math.random() * (to - from + 1) + from);
        System.out.println(ANSI_BLUE + "Guess the Number from: " + from + " to " + to + ANSI_RESET);
        System.out.println(ANSI_YELLOW + "Number was " + checkResult(randomNumber) + ANSI_RESET + " 😎 🥳 🤠 " );
    }

    public static int checkResult(int Number) {

        Scanner input = new Scanner(System.in);
        int guessNumber = -1;
        while (true) {
            
            guessNumber = input.nextInt();
            System.out.print("\033[H\033[2J");
            System.out.flush();

            if (guessNumber > Number) {

                System.out.println(ANSI_RED + "Your Guess " + guessNumber+ " is Greater than Actual Result" + ANSI_RESET + " 😮 " );
            } else if (guessNumber < Number) {

                System.out.println(ANSI_RED + "Your Guess " + guessNumber + " is Smaller than Actual Result." + ANSI_RESET + " 😲 ");
            } else {

                System.out.println(ANSI_YELLOW + "Congratulations!! You found it...." + " 👏 " + ANSI_RESET);
                break;
            }
        }

        input.close();

        return guessNumber;

    }
}