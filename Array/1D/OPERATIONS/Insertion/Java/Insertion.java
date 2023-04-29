import java.util.Scanner;

class Insertion{


    /* Method to get the number of students */
    static int getStudentsNumber() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of students Id to enter: 1-10 ");
        int no_students = input.nextInt();

        return no_students;
    }
    
    public static void main(String[] args){
        // declare array
        int[] students_id = new int[10];
        int no_students = getStudentsNumber();

        Scanner input = new Scanner(System.in);

        //check if input is greater than array size
        if( no_students > students_id.length ){
            System.out.println("Number entered is greater than 10");
            getStudentsNumber();
        }
        
        // loop to insert elements into and array
        for(int i = 1; i <= no_students; i++){
            System.out.println("Enter student " + (i) + " id");
            students_id[i] = input.nextInt();
        }

    }


}