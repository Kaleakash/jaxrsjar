class Car {
	int wheel;
	float price;
	String color;
	
	void start() {
		int temp=100;
		System.out.println("Car Started");
		System.out.println(wheel);
		System.out.println(price);
		System.out.println(temp);
	}
	void stop() {
		String msg="Welcome";
		System.out.println(wheel);
		System.out.println(price);
		System.out.println(msg);
	}
	
}
class AppTest {
	public static void main(String args[]) {
	System.out.println("Main method");
	Car santro = new Car();
	santro.start();
	santro.stop();
	}
}

