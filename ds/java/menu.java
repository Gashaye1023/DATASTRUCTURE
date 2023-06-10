    import java.util.*;
public class mainu{
   public static void main(String args[]){
      Scanner sc=new Scanner(System.in);
      System.out.print("Enter the number of elements you want to store: ");
      int n=sc.nextInt();
      int[] array = new int[n];
      System.out.println("Enter the elements of the array: ");
      for(int i=0; i<n; i++) {
         array[i]=sc.nextInt();
      }
      System.out.println("Array elements are: ");
      for (int i=0; i<n; i++) { 
         System.out.println(array[i]);
      }
	mainLoop: while (true) {
         Scanner inn = new Scanner( System.in );
         System.out.println("\n***Menu***");
         System.out.println("1. Find duplicate elements of an array");
         System.out.println("2. Print array in reverse order");
         System.out.println("3. Print the largest element in an array");
         System.out.println("4. Print the smallest element in an array");
         System.out.println("5. Print the sum of all the items of the array");
         System.out.println("6. Terminate the program");
         System.out.println("Enter action number (1-6): ");
         int command;
         if ( inn.hasNextInt() ) {
            command = inn.nextInt();
            inn.nextLine();
         }
         else {
            System.out.println("\nILLEGAL RESPONSE. YOU MUST ENTER A NUMBER.");
            inn.nextLine();
            continue;
         }
         switch(command) {
            case 1:
            System.out.println("Duplicate elements in given array: ");
            for(int i = 0; i < array.length; i++) {
               for(int j = i + 1; j < array.length; j++)
                  if(array[i] == array[j])
                  System.out.println(array[j]);
               } 
            }
            break;
            case 2:
            System.out.println("Original array: ");
            for (int i = 0; i < array.length; i++) {
               System.out.print(array[i] + " ");
            }
            System.out.println();
            System.out.println("Array in reverse order: ");
            for (int i = array.length-1; i >= 0; i--) {
               System.out.print(array[i] + " ");
            }
            break;
            case 3:
            int max = array[0];
            for (int i = 0; i < array.length; i++) {
               if(array[i] > max)
               max = array[i];
            }
            System.out.println("Largest element present in given array: " + max);
	break;
            case 4:
            int min = array[0];
            for (int i = 0; i < array.length; i++) {
               if(array[i] <min)
               min = array[i];
            }
            System.out.println("Smallest element present in given array: " + min);
            break;
            case 5:
            int sum = 0;
            for (int i = 0; i < array.length; i++) {
               sum = sum + array[i];
            }
            System.out.println("Sum of all the elements of an array: " + sum);
            break;
            case 6:
            System.out.println("Program terminated");
            break mainLoop;
            default:
            System.out.println("Wrong choice!!");
         
         }
      }
   }
}