class IllegalTriangleException extends Exception{
    IllegalTriangleException(String message){
        super(message);
    }
    IllegalTriangleException(double side1,double side2,double side3){
        super("Invalid sides: side1 = " + side1 + ", side2 = " + side2 + ", side3 = " + side3);
    }
}
public class Exercise12_05{
    double side1,side2,side3;
    Exercise12_05(){
        side1 = 1.0;
        side2 = 1.0;
        side3 = 1.0;
    }
    Exercise12_05(double side1,double side2,double side3) throws IllegalTriangleException{
        try {
            setSides(side1, side2, side3);
        } catch (IllegalTriangleException obj){
            obj.getMessage();
        }
    }

    private void setSides(double side1,double side2,double side3) throws IllegalTriangleException{
        if (side1 + side2 < side3) {
            throw new IllegalTriangleException(side1, side2, side3);
        } else if (side2 + side3 < side1) {
            throw new IllegalTriangleException(side1, side2, side3);
        } else if (side1 + side3 < side2) {
            throw new IllegalTriangleException(side1, side2, side3);
        } else {
            this.side1 = side1;
            this.side2 = side2;
            this.side3 = side3;
        }
    }

}