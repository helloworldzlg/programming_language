public class testEncapsulation {
	public static void main(String[] args) {
		Student std = new Student();
		
		std.setName("zhangligui");
		std.setAge(10);
		std.setNumber(20);
		
		System.out.println(std.getName());
		System.out.println(std.getAge());
		System.out.println(std.getNumber());
	}
}