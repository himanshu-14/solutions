import java.util.Scanner;
import java.lang.*;
import java.io.*;

class GFG {
    public static int[] ways;
    public static int numWays (int N) {
        if(N<0)return 0;
        if(ways[N]>0){
            return ways[N];
        }
        int answer=numWays(N-1)+numWays(N-2)+numWays(N-3);
        ways[N]=answer;
        return ways[N];
		//code
		
	}
	public static void main (String[] args) {
		//code
		ways=new int[51];
		//to get indexes 0 to 50
		ways[0]=1;
		for(int i=1;i<=50;i++){
		    ways[i]=0;
		}
		Scanner scan=new Scanner(System.in);
		int T=scan.nextInt();
//	    System.out.println(T);
		while(T>0){
			T--;
		    int N=scan.nextInt();
//		    System.out.println(N);
		    //ready to handle testcase
		    System.out.println(numWays(N));
		    
		}
		scan.close();
	}
}