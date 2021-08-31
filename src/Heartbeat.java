
public class Heartbeat {

	public static void main(String[] args) {
		
		int i = 1;
		int elapsedSecs = 0;
		while (i != 0) {
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
