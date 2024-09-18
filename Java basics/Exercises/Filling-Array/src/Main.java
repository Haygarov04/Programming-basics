import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[5];

        for (int i = 0; i < numbers.length; i++) {
            System.out.print("Enter number: ");
            numbers[i] = scanner.nextInt();
        }

        System.out.print("Array is: ");
        for (int number : numbers) {
            System.out.print(number + " ");
        }
    }
}