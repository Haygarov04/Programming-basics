import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] array = new int[5];
        for (int i = 0; i < 5; i++)
        {       System.out.println("Enter number " + (i + 1) + ":");
        array[i] = sc.nextInt();
    }
        int greatest=array[0];
        for (int i=0;i<5;i++)
        {
            if (greatest<array[i])
            {greatest=array[i]; }
        }
        System.out.println("Gratest number is: "+greatest);

    }
}