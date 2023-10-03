public class Exercise12_04 { /**Loan Class*/
    private double annualInterestRate;
    private int numberOfYears;
    private double loanAmount;
    private java.util.Date loanDate;

    /** Default constructor */
    public Exercise12_04() {
        this(2.5, 1, 1000);
    }

    /** Construct a loan with specified annual interest rate,number of years, and loan amount */
    public Exercise12_04(double annualInterestRate, int numberOfYears, double loanAmount) {
        try{
            if(annualInterestRate <= 0){
                throw new IllegalArgumentException("Annual Interest Rate Cannot be Less than or Equal 0");
            }
            else {
                this.annualInterestRate = annualInterestRate;
            }
            if(numberOfYears <= 0){
                throw new IllegalArgumentException("Number of Years Cannot be Less than or Equal 0");
            }
            else{
                this.numberOfYears = numberOfYears;
            }
            if(loanAmount <= 0){
                throw new IllegalArgumentException("Loan Amount Cannot be Less than or Equal 0");
            }
            else {
                this.loanAmount = loanAmount;
            }
        } catch(IllegalArgumentException obj){
            System.out.println(obj.getMessage());
        }
        loanDate = new java.util.Date();
    }

    /** Return annualInterestRate */
    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    /** Set a new annualInterestRate */
    public void setAnnualInterestRate(double annualInterestRate) {
        try {
            if(annualInterestRate <= 0){
                throw new IllegalArgumentException("Annual Interest Rate Cannot be Less than or Equal 0");
            }
            this.annualInterestRate = annualInterestRate;
        } catch (IllegalArgumentException obj){
            System.out.println(obj.getMessage());
        }
    }
    /** Return numberOfYears */
    public int getNumberOfYears() {
        return numberOfYears;
    }

    /** Set a new numberOfYears */
    public void setNumberOfYears(int numberOfYears) {
        try {
            if(numberOfYears <= 0){
                throw new IllegalArgumentException("Number of Years Cannot be Less than or Equal 0");
            }
            this.numberOfYears = numberOfYears;
        } catch (IllegalArgumentException obj){
            System.out.println(obj.getMessage());
        }
    }

    /** Return loanAmount */
    public double getLoanAmount() {
        return loanAmount;
    }

    /** Set a new loanAmount */
    public void setLoanAmount(double loanAmount) {
        try {
            if(loanAmount <= 0){
                throw new IllegalArgumentException("Loan Amount Cannot be Less than or Equal 0");
            }
            this.loanAmount = loanAmount;
        } catch (IllegalArgumentException obj){
            System.out.println(obj.getMessage());
        }
    }
    /** Find monthly payment */
    public double getMonthlyPayment() {
        double monthlyInterestRate = annualInterestRate / 1200;
        double monthlyPayment = loanAmount * monthlyInterestRate / (1 - (1 / Math.pow(1 + monthlyInterestRate, numberOfYears * 12)));
        return monthlyPayment;
    }

    /** Find total payment */
    public double getTotalPayment() {
        double totalPayment = getMonthlyPayment() * numberOfYears * 12;
        return totalPayment;
    }

    /** Return loan date */
    public java.util.Date getLoanDate() {
        return loanDate;
    }
}

