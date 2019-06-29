import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.HashSet;

public class ProblemB 
{
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
	
	 public static int countDistinct(long[] arr,int n) 
	    { 
	  
	        HashSet<Long> hs = new HashSet<Long>(); 
	  
	        for(int i = 0; i < n; i++) 
	        {  
	            // add all the elements to the HashSet  
	            hs.add(arr[i]); 
	        } 
	          
	        // return the size of hashset as  
	        // it consists of all Unique elements  
	        return hs.size();      
	    } 
	
	 static void printDistinct(int arr[]) 
	    { 
	        // Creates an empty hashset 
	        HashSet<Integer> set = new HashSet<>(); 
	  
	        // Traverse the input array 
	        for (int i=0; i<arr.length; i++) 
	        { 
	            // If not present, then put it in hashtable and print it 
	            if (!set.contains(arr[i])) 
	            { 
	                set.add(arr[i]); 
	               // System.out.print(arr[i] + " "); 
	            } 
	        } 
	    } 
	 static long gcd(long a, long b) 
	    { 
	        if (a == 0) 
	            return b; 
	        return gcd(b % a, a); 
	    } 
	  
	    // Function to find gcd of array of 
	    // numbers 
	    static long findGCD(long arr[], int n) 
	    { 
	        long result = arr[0]; 
	        for (int i = 1; i < n; i++) 
	            result = gcd(arr[i], result); 
	  
	        return result; 
	    } 
	 

	public static void main(String[] args) throws IOException
	{
		Reader r=new Reader();
		int l=r.nextInt();
		
		String s=r.readLine();
		
		
		if(l%2==0)
		{
			long len1=0,len2=0;
			for(int i=0;i<l/2;i++)
			{
				len1=len1+Character.getNumericValue(s.charAt(i));
				
			}
			for(int i=l/2;i<l;i++)
			{
				len2=len2+Character.getNumericValue(s.charAt(i));
				
			}
			
		}
		else
		{
			
			
			
			
		}
		
		

		
		
	}

}
