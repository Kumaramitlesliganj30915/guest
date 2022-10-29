import java.util.*;
class  Main{
    public static void main(String []args){
        ArrayList<String> name=new ArrayList<String>();
        name.add("A");
        name.add("B");
        name.add("C");
        name.add("D");
        System.out.println(name);
        name.remove("A");
        name.remove("B");
        System.out.println(name);
        name.set(0,"E");
                System.out.println(name);
                
        Stack<String> s1=new Stack<String>();
        s1.push("A");
        s1.push("B");
        s1.push("C");
        s1.push("D");
      System.out.println("this is a stack "+s1);
      s1.pop();
      s1.pop();
      System.out.println(s1);

    }
}