class Equation {
    protected double coEffX;
    
    public Equation(double coEffX) {
        this.coEffX = coEffX;
    }
    
    public double findRoot() {
        return 0; 
    }
}

class LinearEquation extends Equation {
    private double constantC;
    
    public LinearEquation(double coEffX, double constantC) {
        super(coEffX);
        this.constantC = constantC;
    }
