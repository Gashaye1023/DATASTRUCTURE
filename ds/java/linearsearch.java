import java.util.Scanner;

public class linearsearch {
    public static int search(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the list: ");
        int n = scanner.nextInt();
        int[] my_list = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter element " + (i+1) + ": ");
            my_list[i] = scanner.nextInt();
        }

        System.out.print("Enter the target value to search for: ");
        int target = scanner.nextInt();
        int result = search(my_list, target);

        if (result == -1) {
            System.out.println("Target value not found in the list.");
        } else {
            System.out.println("Target value found at index " + result + ".");
        }
    }
}
