
import java.util.*;
public class task1
{
    
        static int ch, a, b;
        static float x;
        public static long fact(int n)
        {
            long res=1;
            for(int i=n;i>=1;i--)
                res=res*i;
            return res;
        }
        public static float pow(int y)
        {
            float pro=1;
            for(int i=1;i<=y;i++)
            pro=pro*x;
            return pro;
        } 
        public static int pow1(int z)
        {
            int pro1=1;
            for(int i=1;i<=z;i++)
            pro1=pro1*(-1);
            return pro1;
        } 
public static void main(String args[])
{
    Scanner sc=new Scanner(System.in);
    System.out.println("Welcome to task 1 - Calculator Program.");
    System.out.println("Following are the operations that can be performed; Select the operation, type the number and press Enter:");
    System.out.println("1. Addition of 2 variables\n2. Difference between 2 variables");
    System.out.println("3. Product of 2 variables\n4. Division of one variable by the other ");
    System.out.println("5. Exponentiation of a variable with base e (e^x)\n6. x^y\n7. sin(x)\n8. cos(x)\n9. tan(x)");
    
    ch=sc.nextInt();
    
    float quo=0.0f, exp=0.0f, sine=0.0f, cosine=0.0f;
    switch(ch)
    {
        case 1:
        System.out.println("Enter the values of a and b respectively: ");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("a+b = "+(a+b));
        break;

        case 2:
        System.out.println("Enter the values of a and b respectively: ");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("a-b = "+(a-b));
        break;

        case 3:
        System.out.println("Enter the values of a and b respectively: ");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("a x b = "+(a*b));
        break;

        case 4:
        System.out.println("Enter the values of a and b respectively: ");
        a=sc.nextInt();
        b=sc.nextInt();
        quo=a/b;
        System.out.println("a/b = "+quo);
        break;

        case 5:
        System.out.println("Enter the value of x:");
        x=sc.nextFloat();
        for(int i=1;i<=15;i++)
        {
            exp=exp+((pow(i-1))/(fact(i-1)));
        }
            System.out.println("e^x = e^"+x+" = "+exp);
        break;

        case 6:
        System.out.println("Enter the values of x and y respectively:");
        x=sc.nextFloat();
        int y=sc.nextInt();
        System.out.println("x^y = "+x+"^"+y+" = "+pow(y));
        break;  
    
        case 7: 
        System.out.println("Enter the value of x:");
        x=sc.nextFloat();
        for(int i=1;i<=15;i++)
        sine=sine+((pow1(i+1))*(pow(2*i-1))/fact(2*i-1));
        System.out.println("sin (x) = "+sine);
        break;

        case 8:
        System.out.println("Enter the value of x:");
        x=sc.nextFloat();
        for(int i=1;i<=015;i++)
        cosine=cosine+((pow1(i+1))*(pow(2*i-2))/fact(2*i-2));
        System.out.println("cos (x) = "+cosine);
        break;

        case 9:
        System.out.println("Enter the value of x:");
        x=sc.nextFloat();;
        for(int i=1;i<=15;i++)
        sine=sine+((pow1(i+1))*(pow(2*i-1))/fact(2*i-1));
        for(int i=1;i<=15;i++)
        cosine=cosine+((pow1(i+1))*(pow(2*i-2))/fact(2*i-2));
        System.out.println("tan (x) = "+(sine/cosine));
        break;

        default: System.out.println(ch+" is an invalid choice.");



    }
    sc.close();
}
}