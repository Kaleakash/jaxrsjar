class A {
	A(){
		System.out.println("A class constructor");
	}
	A(int x) {
		System.out.println("A(int)");
	}	
}
class B extends A {
	B(){	
		super(10);
		System.out.println("B class constructor");
	}	
}
class OperationTest {
	public static void main(String args[]) {
	B obj1 = new B();
	}
}






