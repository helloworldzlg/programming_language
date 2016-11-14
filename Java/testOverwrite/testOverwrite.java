
class Animal {
	
	void move() {
		System.out.println("animal");
	}
}

class Dog extends Animal {
	void move() {
		System.out.println("dog");
	}
}

class Cat extends Animal {
	void move() {
		System.out.println("Cat");
	}
}

public class testOverwrite {
	public static void main(String[] args) {
		Dog dog = new Dog();
		Cat cat = new Cat();
		
		dog.move();
		cat.move();
	}
}