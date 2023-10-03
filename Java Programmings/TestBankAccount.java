class NegativeAmountException extends Exception{
    NegativeAmountException(String Message){
        super(Message);
    }
}
class DepositLimitExceededException extends Exception{
    DepositLimitExceededException(String Message){
        super(Message);
    }
}
class InsufficientFundsException extends Exception{
    InsufficientFundsException(String Message){
        super(Message);
    }
}
class BankAccount {
    private final int accountNumber;
    private final String accountHolderName;
    private double balance;
    private final int MAXIMUM_DEPOSIT_LIMIT = 10000;

    BankAccount(int accountNumber,String accountHolderName,double balance){
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount){
        try{
            if(amount <= 0){
                throw new NegativeAmountException("Deposit Amount Can't be Less Than or Equal Zero");
            } else if (amount > MAXIMUM_DEPOSIT_LIMIT) {
                throw new DepositLimitExceededException("Deposit Amount Limit Exceeded");
            } else{
                balance += amount;
                System.out.println(amount+" Deposited"+" Current Balance :"+balance);
            }
        } catch (NegativeAmountException | DepositLimitExceededException obj){
            System.out.println(obj.getMessage());
        }
    }
    public void withdraw(double amount){
        try {
            if(amount <= 0){
                throw new NegativeAmountException("Withdraw Amount Can't be Less Than or Equal Zero");
            } else if (amount > balance) {
                throw new InsufficientFundsException("Insufficient Balance");
            } else{
                balance -= amount;
                System.out.println(amount+" Withdrawn"+" Current Balance :"+balance);
            }
        } catch (InsufficientFundsException | NegativeAmountException obj){
            System.out.println(obj.getMessage());
        }
    }

    @Override
    public String toString(){
        return "Account Number :"+accountNumber+"\n"+"Account Holder Name :"+accountHolderName+"\n"+"Current Account Balance :"+balance+"\n";
    }
}

public class TestBankAccount{
    public static void main(String[] args){
        BankAccount B = new BankAccount(3965,"Agneepradeep Verma",20000);
        System.out.println(B);
        B.deposit(10000);
        B.deposit(-20000);
        System.out.println(B.getBalance());
        B.withdraw(35000);
        B.withdraw(-2000);
        B.withdraw(5000);
        System.out.println(B.getBalance());
    }
}