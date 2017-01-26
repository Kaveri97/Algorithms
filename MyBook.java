//Write MyBook Class
class MyBook extends Book{
    private int price;
    MyBook(String s1, String s2, int i){
        super(s1,s2);
        this.price = i;
    }
    public void display(){
        System.out.println("Title: "+ this.title);
        System.out.println("Author: "+ this.author);
        System.out.println("Price: "+ this.price);
    }
}
