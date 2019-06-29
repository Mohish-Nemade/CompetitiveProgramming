/* Save this in a file called Main.java to compile and test it */

import java.util.*;
import java.io.*;

public class HSBC {
    public static int processArray(ArrayList<Integer> array)
    {
    	int len=array.size();
    	int counter=0,point=0;;
    	int store=array.get(0);
    	while(counter<len)
    	{
    		int max=0;
    		if(store%2==0)
    		{
    			array.set(point,store);
    			point++;
    			counter++;
    			if(counter<len)
    				store=array.get(counter);
    			continue;
    		}
    		else
    		{
    			while(counter<len && store%2!=0)
    			{
    				if(max<store)
    				{
    					max=store;
    				}
    				counter++;
    				if(counter<len)
    					store=array.get(counter);
    			}
    			array.set(point,max);
    			point++;
    			if(counter<len)
    				store=array.get(counter);
    		}
    	}
        return point;
    }

    public static void main (String[] args) {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        Scanner in = new Scanner(System.in);
        while(in.hasNextInt()) {
            int num = in.nextInt();
            if (num < 0) 
                break;
            arrayList.add(new Integer(num));
        }
        int new_length = processArray(arrayList);
        for(int i=0; i<new_length; i++)
            System.out.println(arrayList.get(i));
    }
}
