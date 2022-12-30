public final class Singleton
{
    public static Singleton getInstance(String value)
    {
        if (instance == null)
        {
            instance = new Singleton(value);
        }
        return instance;
    }

    public String getValue()
    {
        return value;
    }

    private Singleton(String value)
    {
        this.value = value;
    }

    private static Singleton instance;
    private String value;
}
