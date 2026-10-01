package Pattern_Printing;

public class Number_right_angle_triangle {
    public static void main(String[] args) {
        
        int row = 5;

        // Series

        System.out.println("Series");

        for(int i=1;i<=row;i++){

            for(int j=1 ;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
        }


        // Inverted series

         System.out.println("Inverted Series");

          for(int i=0;i<row;i++){

            for(int j=1 ;j<=row-i ;j++){
                System.out.print(j);
            }
            System.out.println();
        }


        // Same number

        System.out.println("Same number");

           for(int i=1;i<=row;i++){

            for(int j=1 ;j<=i;j++){
                System.out.print(i);
            }
            System.out.println();
        }

    }
    
}
