
public class MixedFraction extends Fraction {
	 private int wholeNum;
	 public void setWholeNum(int w) {
		 wholeNum = w;
	 }
	 public int getWholeNum() {
		 return wholeNum;
	 }
	 
	public void print() {
		System.out.println(getWholeNum() + "("+ getNumerator()+ "/"+ getDenominator() + ")");
	}
	
	MixedFraction()
	{
		super(1,1);
		wholeNum = 1;
		
	}
	
	MixedFraction( int w, int n, int l)
	{
		super(n,l);
		wholeNum = w;
		
	}
	
	 public Fraction toFraction() { // To be implemented inMixedFraction
		 
			 { numerator = wholeNum * denominator + numerator;
			   
			   System.out.println(numerator + "/"+ denominator);
			 }
			 return (new Fraction(numerator,denominator));
		 } 
	 
	 public void toMixedFraction() { // To be implemented in Fraction
		 int t=0, r=0;
		 if (numerator > denominator)
			 { t = numerator/denominator;
			   r = numerator % denominator;
			   System.out.println(t + "("+ r + "/"+ denominator + ")");
			 }
		 else
			 System.out.println("Fraction in simplest form");
		 }
	 public void sum(MixedFraction mf8) {
		 Fraction f10 = toFraction();
		 Fraction f11 = mf8.toFraction();
		 Fraction F6 = Fraction.add1(f11,f10);
		 F6.print();
		 MixedFraction m15 = new MixedFraction(0,F6.getNumerator(),F6.getDenominator());
		 m15.toMixedFraction();
	 }
	 
}