import java.util.Scanner;

class Insertion {
    static Scanner input = new Scanner(System.in);
    static int i;
    static int choice;
    static int[] students_id = new int[10];

    /* Method to get the number of students */
    static int getStudentsNumber() {
        System.out.println("Enter number of students Id to enter: 1-10 ");
        int no_students = input.nextInt();

        return no_students;
    }

    int insertAtBeginning() {
        // check if array is full
        if (isArrayFull() == -1) {
            System.out.println("Sorry We cant insert more elements in the array:");
            System.out.println("1. Delete some elements in the array\n 2. Quit");
            choice = input.nextInt();

            switch (choice) {
                case 1:
                    deleteElements();
                case 2:
                    return 0;
        }

    }

    int isArrayFull() {
        if (students_id.length == 10)
            return -1;
        else
            return 1;
    }

    // check if arrays id empty
    int isArrayEmpty() {
        if (students_id.length == 0 || students_id == null)
            return -1;
        else
            return 1;
    }

    
    public static void main(String[] args) {
        // declare array
     
        int no_students = getStudentsNumber();
      

        // check if input is greater than array size
        if (no_students > students_id.length) {
            System.out.println("Number entered is greater than 10");
            getStudentsNumber();
        }

        // loop to insert elements into and array
        for (i = 1; i <= no_students; i++) {
            System.out.println("Enter student " + (i) + " id");
            students_id[i - 1] = input.nextInt();
        }

        // print students id in the array
        for (i = 1; i <= no_students; i++) {
            System.out.println(students_id[i - 1]);
        }

        /*
         * insertion in array
         * insert at begining
         */

    }
}