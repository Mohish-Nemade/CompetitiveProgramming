import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

public class CHFING {

	static class Reader 
    { 
        final private int BUFFER_SIZE = 1 << 16; 
        private DataInputStream din; 
        private byte[] buffer; 
        private int bufferPointer, bytesRead; 
  
        public Reader() 
        { 
            din = new DataInputStream(System.in); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public Reader(String file_name) throws IOException 
        { 
            din = new DataInputStream(new FileInputStream(file_name)); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public String readLine() throws IOException 
        { 
            byte[] buf = new byte[64]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
  
        public int nextInt() throws IOException 
        { 
            int ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do
            { 
                ret = ret * 10 + c - '0'; 
            }  while ((c = read()) >= '0' && c <= '9'); 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public long nextLong() throws IOException 
        { 
            long ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public double nextDouble() throws IOException 
        { 
            double ret = 0, div = 1; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
  
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
  
            if (c == '.') 
            { 
                while ((c = read()) >= '0' && c <= '9') 
                { 
                    ret += (c - '0') / (div *= 10); 
                } 
            } 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        private void fillBuffer() throws IOException 
        { 
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE); 
            if (bytesRead == -1) 
                buffer[0] = -1; 
        } 
  
        private byte read() throws IOException 
        { 
            if (bufferPointer == bytesRead) 
                fillBuffer(); 
            return buffer[bufferPointer++]; 
        } 
  
        public void close() throws IOException 
        { 
            if (din == null) 
                return; 
            din.close(); 
        } 
    }


	
	
	public static void main(String[] args) throws IOException
	{

		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		
		while(t>0)
		{
			 BigInteger n = sc.nextBigInteger();
			    BigInteger k = sc.nextBigInteger();
			
			//System.out.println(k);
		    BigInteger MOD = new BigInteger("1000000007");
			BigInteger aa=new BigInteger("-1");

			//BigInteger l=new BigInteger(k.subtract(a).toString());
		    
			if(n==k)
			{

			
			}
		   // BigInteger two = new BigInteger("2");
		  //  BigInteger MAX = new BigInteger("1000000007");
		    BigInteger l = k.subtract(new BigInteger("1"));
		    BigInteger midoflast;
		    BigInteger a = l.mod(n.subtract(new BigInteger("1")));
		    if(k.compareTo(new BigInteger("1")) == 0)
		    {
		        System.out.println("0");
		        t--;
		        continue;
		    }
		    if(a.compareTo(new BigInteger("0")) == 0)
		    {
			     midoflast = k.subtract(new BigInteger("1"));

		        a = n.subtract(new BigInteger("1"));
		    }
		    else
		    {
		    	a = l.mod(n.subtract(new BigInteger("1")));
		    	
		    	}
		    BigInteger z = (l.subtract(a)).divide(n.subtract(new BigInteger("1")));
		    midoflast=new BigInteger("1");
		    
		    z = z.add(new BigInteger("1"));
		    
		    
		    System.out.println(z.multiply((a.add(l))).divide(new BigInteger("2")).mod(new BigInteger("1000000007")));
		    
		    
		    
		    
		/*    
			if(n==k || n>k)
			{
				System.out.println(k-1);
			}
			else
			{
			long l=k-1;
			
			
		//	BigInteger diff=new BigInteger(n.subtract(a).toString());
			long diff=n-1;
			
			long xx=l;
			long di=diff;
			long i=0;
			long aaa=(xx-((((xx/di)-1)*di)%1000000007))%1000000007;
			
			System.out.println(((xx/di)*((aaa+l))%1000000007)/2);

			}*/
			
			
			
	
	
			t--;
		}
	}
}
