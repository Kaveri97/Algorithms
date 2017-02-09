
public class MatrixFraction {
	
	private Fraction[][] matrixFrac;
	/** Constructor section*/
	MatrixFraction() {
	// default constructor - initializes to identity matrix
	matrixFrac = new Fraction[3][3]; // First create array of 3x3 size
	matrixFrac[0][0] = new Fraction(1,1); // Then populate the matrix
	matrixFrac[0][1] = new Fraction(0,1);
	matrixFrac[0][2] = new Fraction(0,1);
	matrixFrac[1][0] = new Fraction(0,1);
	matrixFrac[1][1] = new Fraction(1,1);
	matrixFrac[1][2] = new Fraction(0,1);
	matrixFrac[2][0] = new Fraction(0,1);
	matrixFrac[2][1] = new Fraction(0,1);
	matrixFrac[2][2] = new Fraction(1,1);
	}
	
	MatrixFraction(Fraction f00, Fraction f01, Fraction f02,
			Fraction f10, Fraction f11, Fraction f12,
			Fraction f20, Fraction f21, Fraction f22) {
			matrixFrac = new Fraction[3][3];
			matrixFrac[0][0] = f00;
			matrixFrac[0][1] = f01;
			matrixFrac[0][2] = f02;
			matrixFrac[1][0] = f10;
			matrixFrac[1][1] = f11;
			matrixFrac[1][2] = f12;
			matrixFrac[2][0] = f20;
			matrixFrac[2][1] = f21;
			matrixFrac[2][2] = f22;
			}
	/** To set the values of all the elements of the matrix */
	public void setMatrix(Fraction f00, Fraction f01, Fraction f02,
			Fraction f10, Fraction f11, Fraction f12,
			Fraction f20, Fraction f21, Fraction f22) {
			
		f00.setNumerator(3);
		f00.setDenominator(5);
		f01.setNumerator(5);
		f01.setDenominator(7);
		f02.setNumerator(7);
		f02.setDenominator(9);
		f10.setNumerator(2);
		f10.setDenominator(3);
		f11.setNumerator(3);
		f11.setDenominator(5);
		f20.setNumerator(5);
		f20.setDenominator(8);
		f21.setNumerator(6);
		f21.setDenominator(11);
		f12.setNumerator(2);
		f12.setDenominator(5);
		f22.setNumerator(3);
		f22.setDenominator(5);
		
			}
	/** To set the value of a particular element of the matrix */
	public void setElement(Fraction frac, int row, int column) {
	 
		matrixFrac[row][column] = frac;
		
		}
	/** To get the value of a particular element of the matrix */
	public Fraction getElement(int row, int column) {
		
		return matrixFrac[row][column];
		
		}
	/** To compute determinant */
	public int determinant() {
	
		Fraction det1,det2,det3;
		Fraction det, detres;
		int m;
		det1=matrixFrac[0][0].multiply((matrixFrac[1][1].multiply(matrixFrac[2][2])).subtract(matrixFrac[1][2]).multiply(matrixFrac[2][1]));
		det2=matrixFrac[0][1].multiply((matrixFrac[1][0].multiply(matrixFrac[2][2])).subtract(matrixFrac[2][0]).multiply(matrixFrac[1][2]));
		det3=matrixFrac[0][2].multiply((matrixFrac[1][0].multiply(matrixFrac[2][1])).subtract(matrixFrac[2][0]).multiply(matrixFrac[1][1]));
	    det = det1.subtract(det2);
	    detres = det.add(det3);
	    m = detres.reduce();
	    return m;
	    
	}

	/** To compute transpose (non-mutable) */
	public MatrixFraction transpose() {
	
		MatrixFraction trans = new MatrixFraction();
		int i,j;
		for(i=0; i<3;i++)
			{ for(j=0;j<3;j++)
			{
				trans.matrixFrac[i][j].numerator = matrixFrac[j][i].numerator;
				trans.matrixFrac[i][j].denominator = matrixFrac[j][i].denominator;
			}
			}
		return trans;
	}
	
	/** Check if this is an identity matrix */
	public boolean isIdentity() {
		int i,j;
		int o=0,z=0;
		MatrixFraction f = new MatrixFraction ();
		for(i=0; i<3;i++)
		{ for(j=0;j<3; j++)
		{
		  if (i==j && f.matrixFrac[i][j].numerator == f.matrixFrac[i][j].denominator )
		  	o++;
		  if ( i!=j && f.matrixFrac[i][j].numerator == 0)
		   z++;
		  
			  
		}
		}
		if ( o == 3 && z == 6 )
		  	return true;
		  else
		  	return false;
	}
	
	 /** Check if this is an upper triangular matrix */
	public boolean isUpperTriangular() {
		int i,j;
		int o=0,z=0;
		MatrixFraction f = new MatrixFraction ();
		for(i=0; i<3;i++)
		{ for(j=0;j<3; j++)
		{
		  if (i<j && f.matrixFrac[i][j].numerator != 0 )
		  	return false;
		}
		}
		return true;
	
	}
	/** Check if this is a lower triangular matrix */
	public boolean isLowerTriangular() {
		int i,j;
		int o=0,z=0;
		MatrixFraction f = new MatrixFraction ();
		for(i=0; i<3;i++)
		{ for(j=0;j<3; j++)
		{
		  if (i>j && f.matrixFrac[i][j].numerator != 0 )
		  	return false;
		}
		}
		return true;
	
	} 
	
	 /** Check if two matrices are same */
	public boolean isSame(MatrixFraction mFrac) {
		int i,j;
		int o=0,z=0;
		MatrixFraction f = mFrac;
		for(i=0; i<3;i++)
		{ for(j=0;j<3; j++)
		{
		  if (f.matrixFrac[i][j].numerator !=  matrixFrac[i][j].numerator &&  f.matrixFrac[i][j].denominator !=  matrixFrac[i][j].denominator );
		  	return false;
		}
		}
		return true;
		
	}
	
}