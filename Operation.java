import java.util.Scanner;
import java.util.ArrayList;

public class Operation {
    static ArrayList<Coins> myCoins = new ArrayList<Coins>(); //global variable
    public static void main(String[] args){
        
        myCoins.add(new Coins("Bitcoin","BTC",113158.03));//create new Coin
        myCoins.add(new Coins("Ethereum ","ETH",4136.30));
        myCoins.add(new Coins("BNB  ","BNB ",1218.79));
        //menu
        mainMenu();

    }

    //menu
    public static void mainMenu(){
        clearScreen();
        Scanner sc = new Scanner(System.in);
        boolean exitApp = false;        
        // int selection = 9;
        while(!exitApp){
            System.out.println("Crypto Coin Main Menu");
            System.out.println("1. Product module");
            System.out.println("2. Client module");
            System.out.println("3. Transaction module");
            System.out.println("0. Exit");
            int choice = sc.nextInt();
            switch(choice){
                case(1):
                {
                    //System.out.println("under construction module 1");
                    clearScreen();
                    subMenuProduct(sc);
                    break;
                }
                case(0):
                    System.out.println("Exiting application...");
                    exitApp = true;  
                    break;
            }
        }
    }

    public static void subMenuProduct(Scanner sc){
        boolean back = false;
        //Scanner sc = new Scanner(System.in);
        while(!back){
            System.out.println("Crypto Coin Product module");
            System.out.println("1. C - Create new coin ");
            System.out.println("2. R - Read coins data");
            System.out.println("3. U - Update coin attributes");
            System.out.println("4. D - Delete coin");
            System.out.println("0. Back to Main menu");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:{
                    clearScreen();                    
                    System.out.print("Name of cypto: ");
                    String name = sc.next();
                    System.out.print("Symbol of cypto: ");
                    String symbol = sc.next();
                    System.out.print("Price of cypto: ");
                    double price = sc.nextDouble();
                    myCoins.add(new Coins(name,symbol,price));
                    System.out.print("New coin added");
                    break;
                    
                }
                case 2:{
                    clearScreen();
                    readData();               
                    break;
                }
                case 3:{
                    clearScreen();
                    readData();   
                    System.out.print("Select which to update: ");
                    int selection = sc.nextInt();
                    Coins tempCoin = myCoins.get(selection - 1);
                    System.out.println("Current name: " + tempCoin.getName());
                    System.out.print("New name: ");
                    String name = sc.next();   
                    tempCoin.setName(name);
                    System.out.println("Current symbol: " + tempCoin.getSymbol()); 
                    System.out.print("New symbol: ");
                    String symbol = sc.next();   
                    tempCoin.setSymbol(symbol);    
                    System.out.println("Current price: " + tempCoin.getPrice()); 
                    System.out.print("New price: ");
                    double price = sc.nextDouble();   
                    tempCoin.setPrice(price);                                                                     
                    break;
                }    
                case 4:{
                    clearScreen();
                    readData();
                    System.out.println("Which to delete?"); 
                    int selection = sc.nextInt();
                    System.out.println("Are you sure you want to delete " + myCoins.get(selection - 1) + "? (Y/N)"); 
                    String confirmation = sc.next(); 
                    if(confirmation.equalsIgnoreCase("Y"))
                        myCoins.remove(selection - 1);
                    else
                        break;
                    
                    break;
                }    
                case 0:{    
                    clearScreen();
                    back = true;           
                    break;
                }                                                  
                    
                    
            
                default:
                    System.out.print("invalid selection");
                    break;
            }
            



    }
    

    }
    public static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    public static void readData(){
        System.out.println("Current coins that I owned");
        int i = 1;
        for (Coins crypto : myCoins) {
            System.out.print(i + ". ");
            System.out.println(crypto);
            i++;

        } 
    }

}