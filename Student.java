class Student extends Person{
	private int[] testScores;
    
    public Student(String firstName, String lastName, int id, int[] testScores){
    super(firstName,lastName,id);
    this.testScores=testScores;
    this.firstName=firstName;
    this.lastName=lastName;
    this.idNumber=id;
}

public char calculate(){
    int sum= 0; 
    for(int i=0;i<testScores.length;i++){
        sum+=testScores[i];
    }
    sum=sum/testScores.length;
    if(90<=sum && sum<=100){
        return 'O';
    }else if(80<=sum && sum<90){
        return 'E';
    }else if(70<=sum && sum<80){
        return 'A';
    }else if(55<=sum && sum<70){
        return 'P';
    }else if(40<=sum && sum<55){
        return 'D';
    }else if(0<=sum && sum<40){
        return 'T';
    }
    else
    return Character.MIN_VALUE;
}
   
}