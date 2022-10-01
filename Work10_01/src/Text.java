
public class Text {
	private static Object employee;

	public static void main(String[] args) {
		
		Employee[] employees = {new Employee(1001,"张三",1.78,65.5),
				new Employee(1002,"Lovett Smith",1.6,53),
				new Employee(1003,"John Smith",1.6,53),
				new Employee(1004,"Smith",1.6,53),
				new Employee(1005,"Smith Lan",1.6,53),
				new Employee(1006,"John Brown",1.6,53),
				new Employee(1007,"Mr. John",1.6,53),
				new Employee(1008,"John",1.6,53),
				new Employee(1008,"李四",1.6,71),
				new Employee(1008,"王五",1.6,81),
				new Employee(1008,"赵六",1.6,107),
				new Employee(1008,"张三丰",1.6,94),};
		
//		for(int i = 0;i<employees.length;i++) {
//			employees[i].print();
//		}
		
		//按名字精确查找
		searchEmployee(employees,"张三丰");
		//按名字模糊查找
		searchContainNameEmployee(employees, "Smith");
		//名字起始查询
		searchStartNameEmployee(employees, "John");
		//名字结束查询
		searchEndNameEmployee(employees, "Smith");
		//输出所有员工的BMI指数
		showEmployeeBMI(employees);
		
	
	}
	
	//查找
	public static void searchEmployee(Employee[] employees , String name) {
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().equals(name)) {
				System.out.println("存在姓名为"+name+"的职工");
				return;
			}
		}
		System.out.println("不存在姓名为"+name+"的职工");
		
	}	
	
	//按名字模糊查找
	private static void searchContainNameEmployee(Employee[] employees, String containName) {
		System.out.println("名字包含"+containName+"的是：");
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().contains(containName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}

	//名字起始查询
	private static void searchStartNameEmployee(Employee[] employees, String startName) {
		System.out.println("名字以"+startName+"开头的人是：");
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().startsWith(startName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}
	
	//名字结束查询
	private static void searchEndNameEmployee(Employee[] employees, String endName) {
		System.out.println("名字以"+endName+"结尾的人是：");
		for(int i = 0 ;i<employees.length;i++) {
			if(employees[i].getName().endsWith(endName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}
	
	//输出所有员工的BMI指数
	private static void showEmployeeBMI(Employee[] employees) {
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getBMI()>18 && employees[i].getBMI()<=25) {
				System.out.printf("%s:  %s\n",employees[i].getName(),"正常体重");
			}else if(employees[i].getBMI()>25 && employees[i].getBMI()<=30){
				System.out.printf("%s:  %s\n",employees[i].getName(),"超重");
			}else if(employees[i].getBMI()>30 && employees[i].getBMI()<=35){
				System.out.printf("%s:  %s\n",employees[i].getName(),"轻度肥胖");
			}else if(employees[i].getBMI()>35 && employees[i].getBMI()<=40){
				System.out.printf("%s:  %s\n",employees[i].getName(),"中度肥胖");
			}else if(employees[i].getBMI()>40){
				System.out.printf("%s:  %s\n",employees[i].getName(),"重度肥胖");
			}
			
		}
		
	}
	
	
	
}


