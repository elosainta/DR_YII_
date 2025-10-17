public class Coins {
    private String name;
    private String symbol;
    private double price;
    //default constructor
    public Coins(){
        this.name = "";
        this.symbol = "";
        this.price = 0.0;
    }
    //normal construcor 
    public Coins(String name, String symbol, double price){
        this.name = name;
        this.symbol = symbol;
        this.price = price;        
    }
    //getters
    public String getName() {
        return name;
    }

    public String getSymbol() {
        return symbol;
    }

    public double getPrice() {
        return price;
    }    
    //setters
    public void setName(String name) {
        this.name = name;
    }

    public void setSymbol(String symbol) {
        this.symbol = symbol;
    }

    public void setPrice(double price) {
        if (price >= 0) {
            this.price = price;
        } else {
            System.out.println("Invalid price. Must be non-negative.");
        }
    }    
    
    // toString method for printing
    @Override
    public String toString() {
        return "name = " + name + 
                ", symbol = " + symbol + 
                ", price = " + price ;
    }
    
}