
public class Heartbeat {

	public static void main(String[] args) {
		
//		int i = 1; //i is used to establish an infinite loop
		int elapsedSecs = 0;
		while (true) {
			try {
				Thread.sleep(1000);
				elapsedSecs++;
				System.out.println(elapsedSecs + " second(s) have passed");
			} catch(InterruptedException e) {
				e.printStackTrace();
		}			
		}

	}

}
