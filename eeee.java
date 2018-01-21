import java.util.*;
public class Switch {

	public static void main(String[] args) {
		System.out.println("Enter the no of switches:");
		int n=0;
		int count=2;
		Scanner ip=new Scanner(System.in);
		n=ip.nextInt();
		boolean switches[]=new boolean[n];
		for(int i=0;i<n;i++){
			switches[i]=true;
					}
	switches[n-1]=false;
		for(int j=n-1;j>1;j--){
			if(switches[j]==false){
				switches[j-1]=true;
				count++;
				switches[j-2]=false;
				count++;
				}
			else if(switches[j]==true){
				switches[j]=false;count++;
				switches[j-1]=true;count++;
				switches[j-2]=false;count++;
			}
		}
		for(int i=1;i<n-1;i++){
			switches[i+1]=true;count++;
			switches[i]=false;count++;
		}
		switches[n-1]=false;
	System.out.println("Minimum switchings required to switch off all switches:"+count);
	}
}
