package Pattern_Printing;

public class Right_angle_triangle {

    public static void main(String[] args) {


        int row = 5;

        // Straight 
        System.out.println("Straight");
        for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                 System.out.print("*");
            }

             System.out.println();
        }

        // Reverse
         System.out.println("Reverse");

        for(int i=1;i<=row;i++){

            for(int j=1;j<=row-i;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                 System.out.print("*");
            }
             System.out.println();
        }


        // Upside Down
         System.out.println("Upside Down");
        for(int i=1;i<=row;i++){
            for(int j=row;j>=i;j--){
                 System.out.print("*");
            }

             System.out.println();
        }

        // Upside down reverse
         System.out.println("Upside Down Reverse");
        for(int i=1;i<=row;i++){

            for(int j=1;j<i;j++){
                System.out.print(" ");
            }

            for(int j=row;j>=i;j--){
                 System.out.print("*");
            }

            System.out.println();
        }

        

    }
    
}
