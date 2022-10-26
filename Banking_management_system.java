import java.util.Scanner;

class Account {
  private int accountNumber;
  private String accountType;
  private String serviceBranchIFSC;
  private float minimumBalance;
  private float availableBalance;
  private int coustomerID;
  private String coustmerName;
  private static int totalAccountCreated;

  Account() {
    accountNumber = 0;
    accountType = "";
    serviceBranchIFSC = "";
    minimumBalance = 0;
    availableBalance = 0;
    coustomerID = 0;
    coustmerName = "";
    totalAccountCreated++;
  }

  public void setDetails(
    int accnumber,
    String acctype,
    String IFSC,
    float minBalance,
    float avaBalance,
    int coustID,
    String coustName
  ) {
    accountNumber = accnumber;
    accountType = acctype;
    serviceBranchIFSC = IFSC;
    minimumBalance = minBalance;
    availableBalance = avaBalance;
    coustomerID = coustID;
    coustmerName = coustName;
  }

  public String getDetails(int BankId) {
    return ("\nAccount number: " +accountNumber +"\nAccount type: " +accountType +"\nIFSC code: " +serviceBranchIFSC +"\nMin Balance: " +minimumBalance +"\nAvailable Balance: " +availableBalance +"\nCoustmer Id: " +coustomerID +"\nCoustmer name: " +coustmerName +"\n"
    );
  }

  public float getBalance(int accoutNumber) {
    return (availableBalance);
  }

  public void deposit(int accountNumber, float amount) {
    availableBalance = availableBalance + amount;
    System.out.println("Rs " +amount +" has credited in account.Balance of account is: " +availableBalance
    );
  }

  public void withdraw(int accountNumber, float amount) {
    if (amount <= availableBalance) {
      availableBalance = availableBalance - amount;
      System.out.println("Rs " +amount +" has withdrawn from account.Balance of account is:" +availableBalance
      );
    } else {
      System.out.println(
        "You have not enough amount in your account to withdraw."
      );
    }
  }

  static int totalAccount() {
    return totalAccountCreated;
  }

  public int getid() {
    return coustomerID;
  }

  public int getacno() {
    return accountNumber;
  }

  public void updateminbalance(int accountNumber, int amount) {
    minimumBalance = amount;
  }

  public void updatecname(int accountNumber, String name) {
    coustmerName = name;
  }

  public void updatecid(int accountNumber, int id) {
    coustomerID = id;
  }

  public void compare(Account first, Account second) {
    if (first.availableBalance > second.availableBalance) {
      System.out.print(
        "\nFirst account has more balance than second.\nDetalis of first account are:"
      );
      String f = first.getDetails(first.getacno());
      System.out.println(f);
    }
    if (first.availableBalance < second.availableBalance) {
      System.out.print(
        "\nSecond account has more balance than first.\nDetails of second account are:"
      );
      String s = second.getDetails(second.getacno());
      System.out.println(s);
    }
    if (first.availableBalance == second.availableBalance) {
      System.out.println("\nBoth account have same balance.");
      System.out.print("Details of first account are: ");
      String i = first.getDetails(first.getacno());
      System.out.println(i);
      System.out.print("\nDetails of second account are: ");
      String ii = second.getDetails(second.getacno());
      System.out.println(ii);
    }
  }
}

public class l4q1 {

  public static void main(String[] args) {
    Account[] arr;
    arr = new Account[100];

    for (int i = 0; i < 5; i++) {
      arr[i] = new Account();
    }

    arr[0].setDetails(2101001, "Savings", "IIITG1234", 0, 25000, 101, "ABC");
    arr[1].setDetails(2101002, "Savings", "IIITG1234", 0, 10000, 102, "MNO");
    arr[2].setDetails(2101003, "Savings", "IIITG1234", 0, 100000, 103, "JKL");
    arr[3].setDetails(2101004, "Savings", "IIITG1234", 0, 53000, 104, "PQR");
    arr[4].setDetails(2101005, "Savings", "IIITG1234", 0, 18000, 105, "XYZ");

    Scanner sc = new Scanner(System.in);

    System.out.println(
      "\nEnter 1 for Update Details\nEnter 2 for Get Details\nEnter 3 for Deposit\nEnter 4 for Withdraw\nEnter 5 for compare two accounts\nEnter 6 to display total no. of account created\nEnter 7 for exit."
    );
    int n = 1;
    int flag = 0;
    while (n != 7) {
      int p = 5;
      flag = 0;
      System.out.print("\nEnter your choice:");
      n = sc.nextInt();

      switch (n) {
        case 1:
          System.out.print(
            "Enter the account no. whose details you want to update:"
          );
          int b_id = sc.nextInt();
          for (int j = 0; j < p; j++) {
            if (arr[j].getacno() == b_id) {
              System.out.print(
                "\nEnter 1 for Update minimum balance\n2 for Get update coustmer id\n3 for update coustmer name\n\nEnter a number according to the type of change you want:"
              );
              int u = sc.nextInt();
              String e = sc.nextLine();
              if (u == 1) {
                System.out.print("Enter the new minimum balance:");
                int min_bal = sc.nextInt();
                arr[j].updateminbalance(b_id, min_bal);
                System.out.print("Minimum balance updated.");
                flag = 1;
              }

              if (u == 2) {
                System.out.print("Enter the new coustmer id:");
                int id = sc.nextInt();
                arr[j].updatecid(b_id, id);
                System.out.print("Coustmer id updated.");
                flag = 1;
              }

              if (u == 3) {
                System.out.print("Enter the name:");
                String name = sc.nextLine();
                arr[j].updatecname(b_id, name);
                System.out.print("Name updated.");
                flag = 1;
              }
              if (u != 1 && u != 2 && u != 3) {
                System.out.print("You entered a wrong option.Try again");
                flag = 1;
              }
            }
          }
          if (flag == 0) {
            System.out.print("You entered a wrong  account no.Try again.");
          }
          break;
        case 2:
          flag = 0;
          System.out.print("Enter the account no. whose details you want:");
          int bid = sc.nextInt();
          for (int j = 0; j < p; j++) {
            if (arr[j].getacno() == bid) {
              String b = arr[j].getDetails(bid);
              System.out.print(b);
            }
          }
          break;
        case 3:
          flag = 0;
          System.out.print("Enter the account no:");
          int id1 = sc.nextInt();
          System.out.print("Enter the amount:");
          int d = sc.nextInt();
          for (int j = 0; j < p; j++) {
            if (arr[j].getacno() == id1) {
              arr[j].deposit(id1, d);
              flag = 1;
              break;
            }
          }
          if (flag == 0) {
            System.out.print("You entered a wrong  account no.Try again.");
          }
          break;
        case 4:
          flag = 0;
          System.out.print("Enter the account no:");
          int id2 = sc.nextInt();
          System.out.print("Enter the amount:");
          int w = sc.nextInt();
          for (int j = 0; j < p; j++) {
            if (arr[j].getacno() == id2) {
              arr[j].withdraw(id2, w);
              flag = 1;
              break;
            }
          }
          if (flag == 0) {
            System.out.print("You entered a wrong  account no.Try again.");
          }
          break;
        case 5:
          flag = 1;
          System.out.print("Enter the first account no.:");
          int id3 = sc.nextInt();
          String a = sc.nextLine();
          System.out.print("Enter the second account no.:");
          int id4 = sc.nextInt();
          for (int i = 0; i < p; i++) {
            for (int j = 0; j < p; j++) {
              if (arr[i].getacno() == id3 && arr[j].getacno() == id4) {
                arr[i].compare(arr[i], arr[j]);
                flag = 1;
                break;
              }
            }
          }
          if (flag == 0) {
            System.out.print("You entered a wrong  account no.Try again.");
          }
          break;
        case 7:
          System.out.println("Thank you for visiting us.");
          break;
        case 6:
          System.out.println(
            "Total no of account created is: " + Account.totalAccount()
          );
          break;
        default:
          System.out.println(
            "The entered number does not belong to the given options.Try again."
          );
          break;
      }
    }
    sc.close();
  }
}
