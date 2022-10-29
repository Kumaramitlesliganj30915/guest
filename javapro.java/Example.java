public class Person{
    private int age;
    private String name;
    public void setAge(int a)
    {
        age=a;
    } 
    public void setName(String n)
    {
        name=n;
    }
    public int getAge()
    {
        return age;
    }
    public String getName()
    {
        return name;
    }
}
class Student extends Person{
    private rollno;
    public void setRollno(int r){
        rollno=r;
    }
    public int getRollno()
    {
        return rollno;
    }
}
public class Example{
    public static void main(String []args){
        Student s1=new Student;
        s1.setRollno(100);
        s1.setName("amit");
        s1.setAge(22);
        System.out.println("rollno =:"+s1.getRollno());
        System.out.println("rollno =:"+s1.getName());
       System.out.println("rollno =:"+s1.getAge());
        

        

    }
}