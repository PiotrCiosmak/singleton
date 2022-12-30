public class Main
{
    public static void main(String[] args)
    {
        System.out.println("If you see the same value, then singleton was reused");
        System.out.println("If you see different values, then 2 singletons were created");
        System.out.println("RESULT:");
        Singleton firstSingleton = Singleton.getInstance("HI");
        Singleton secondSingleton = Singleton.getInstance("HELLO");
        System.out.println(firstSingleton.getValue());
        System.out.println(secondSingleton.getValue());
    }
}