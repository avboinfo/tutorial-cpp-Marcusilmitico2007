/* ** BiciclettaEMotorino.java */


public class Bicicletta {
    // Attributi
    public int raggio;
    public String colore;

    
    public Bicicletta() {
        raggio = 10;
        colore = "Bianco";
    }

    
    public Bicicletta(int r, String c) {
        raggio = r;
        colore = c;
    }

    
    public void presentati() {
        System.out.println("Buongiorno, sono una bici di colore " + colore + " e con le ruote " + raggio + "!");
    }
}


class Motorino {
    // Attributi
    public int raggio;
    public String colore;

    
    public Motorino() {
        raggio = 10;
        colore = "Bianco";
    }

    
    public Motorino(int r, String c) {
        raggio = r;
        colore = c;
    }

    
    public void presentati() {
        System.out.println("Buongiorno, sono un motorino di colore " + colore + " e con le ruote " + raggio + "!");
    }
}


public class BiciclettaEMotorino {
    public static void main(String[] args) {
        
        Bicicletta x = new Bicicletta();
        x.presentati();

        Bicicletta y = new Bicicletta(12, "Rosso");
        y.presentati();

        
        Motorino m1 = new Motorino();
        m1.presentati();

        Motorino m2 = new Motorino(14, "Nero");
        m2.presentati();
    }
}
