

public class Helloworld {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");

        /* 
        System.out.print("Hello, World!");
        System.out.println();*/
        int a = 1;
        int b= 2;
        int c= a + b;

        //contro spazio per far riapparire il completamento automatico
        //nel linguaggio Java tutto deve stare in una classse
        
        /* 
        System.out.println(c);
        */
        // Leggere un numero
        /* 
        Scanner inputTerminale = new Scanner(System.in);
        System.out.print("Dimmi di che lunghezza vuoi il rettangolo");

        int lunghezza = inputTerminale.nextInt();
        System.out.println(lunghezza);
        System.out.print("Dimmi l'altezza DEL rettangolo");

        int altezza = inputTerminale.nextInt();
        System.out.println(altezza);
        inputTerminale.close();

        for (int i = 0; i < altezza; i++) {
            for (int j = 0; j < lunghezza; j++) {     
                System.out.print("*");    
            }
            System.out.println();
*/  
            int altezza=20;
            int larghezza =15;

            
            for (int i = 0; i < altezza; i++) {
                if(i==0 || i == altezza - 1){
                for (int j = 0; j < larghezza; j++) {
                    System.out.print("*");
                    
                }
            }else{
                System.out.print("**");
                for (int j = 0; j < larghezza - 4; j++) {
                    System.out.print(" ");
                }
                System.out.print("**");
            }
            System.out.println();
        }
    
    }
}



