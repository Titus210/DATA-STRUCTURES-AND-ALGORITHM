import java.util.Scanner;

class Insertion {
    Scanner input = new Scanner(System.in);
    int i, choice, pos;
    int[] students_id = new int[10];

    /* Method to get the number of students */
    int getStudentsNumber() {
        System.out.println("Enter number of students Id to enter: 1-10 ");
        int no_students = input.nextInt();

        return no_students;
    }

    int displayInsertionMessage() {
        if (isArrayFull() == -1) {
            System.out.println("Sorry We cant insert more elements in the array:");
            System.out.println("1. Delete some elements in the array\n 2. Quit");
            choice = input.nextInt();

            switch (choice) {
                case 1:
                    deleteElements();
                case 2:
                    exit();
            }
        }
        return 1;
    }

    int[] insertAtBeginning() {
        // check if array is full
        if (displayInsertionMessage() == 1) {
            System.out.println("Enter element to insert");
            choice = input.nextInt();
            System.out.println("Enter position to insert");
            pos = input.nextInt();
            for (i = students_id.length - 1; i == students_id[0]; i--) {
                students_id[i + 1] = students_id[i];
            }
            students_id[0] = choice;
        }
        return students_id;

    }

    int[] insertAtGivenPos() {
        if (displayInsertionMessage() == 1) {
            System.out.println("Enter element to insert");
            choice = input.nextInt();
            for (i = students_id.length - 1; i == students_id[0]; i--) {
                students_id[i + 1] = students_id[i];
            }
            students_id[0] = choice;
        }
        return students_id;
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

    /* Delete elements in an array */
    int deleteElements() {
        System.out.println("Enter position to delete ");
        choice = input.nextInt();

        return -1;
    }

    int exit() {
        return 0;
    }

    public static void main(String[] args) {
        // declare array
        Insertion instance = new Insertion();

        int no_students = instance.getStudentsNumber();

        // check if input is greater than array size
        if (no_students > instance.students_id.length) {
            System.out.println("Number entered is greater than 10");
            instance.getStudentsNumber();
        }

        // loop to insert elements into and array
        for (instance.i = 1; instance.i <= no_students; instance.i++) {
            System.out.println("Enter student " + (instance.i) + " id");
            instance.students_id[instance.i - 1] = instance.input.nextInt();
        }

        // print students id in the array
        for (instance.i = 1; instance.i <= no_students; instance.i++) {
            System.out.println(instance.students_id[instance.i - 1]);
        }

        /*
         * insertion in array
         * insert at begining
         */
        instance.insertAtBeginning();
        instance.insertAtGivenPos();

    }
}