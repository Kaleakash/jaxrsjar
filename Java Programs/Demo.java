import java.util.*;
class Demo {
	public static void main(String args[]) {
	
	//List<Type> ll = new ArrayList<Type>();

	List<Integer> ll = new ArrayList<Integer>();
	ll.add(10);
	ll.add(20);
	ll.add(30);
	ll.add(50);

			int obj = ll.get(0);	//auto-unboxing : converting object to primitive 
			System.out.println(obj);
		
	
	/*List ll = new ArrayList();
	ll.add(10);		// auto-boxing 
	ll.add("Raj");
	ll.add(10.10);
	ll.add(true);
	
			Object obj = ll.get(1);
			if(obj instanceof String) {
				String str = (String)obj;
				System.out.println("String value "+str);
			}
			if(obj instanceof Integer) {
				Integer obj1 = (Integer)obj;
				System.out.println("Integer value "+obj1);
			}
		*/
			/*Integer ii = (Integer)obj;
			int n = ii.intValue();	//converting objet to primitive 
			System.out.println(n);*/
	}
}



	hamcrest-core-1.3

	junit-4.12

	



















