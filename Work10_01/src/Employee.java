
public class Employee {
	int id;
	String name;
	double height;
	double weight;
	double  getBMI() {
		return this.weight/(this.height*this.height);
	}
	
	//setter����
	public void setId(int id) {
		this.id=id;
	}
	public void setName(String name) {
		this.name=name;
	}
	public void setHeight(double height) {
		this.height=height;
	}
	public void setWeight(double weight) {
		this.weight=weight;
	}
	//getter����
	public int getId() {
		return this.id;
	}
	public String getName() {
		return this.name;
	}
	public double getHeight() {
		return this.height;
	}
	public double getWeight() {
		return this.weight;
	}
	//��ӡְ����Ϣ
	public void print() {
		System.out.println("id:"+getId()+
				" name:"+getName()+
				" height:"+getHeight()+
				" weight:"+getWeight());
		
		System.out.println("BMI:"+getBMI());
	}

	//���췽������������ĳ�ʼ��
	public Employee()
	{
		
	}

	public Employee(int id,String name,double height,double weight) {
		this.id = id;
		this.name = name;
		this.height = height;
		this.weight = weight;
	}

}


