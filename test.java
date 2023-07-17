public class test{
    static int countDivisbleby4(String s)
    {
        int n = s.length();
        int count = 0;
        for (int i = 0; i < n; ++i)
            if (s.charAt(i) == '4' || s.charAt(i) == '8' || s.charAt(i) == '0')
                count++ ;
        for (int i = 0; i < n - 1; ++i)
        {
            int h = ( s.charAt(i) - '0' ) * 10 + ( s.charAt(i+1) - '0' );
            if (h % 4 == 0) 
                count = count + i + 1 ;
        }  
        return count;
    }
    public static void main(String[] args) {
        String s = "303416";
        System.out.println(countDivisbleby4(s));
    }
}