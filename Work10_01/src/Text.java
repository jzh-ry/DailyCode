
public class Text {
	private static Object employee;

	public static void main(String[] args) {
		
		Employee[] employees = {new Employee(1001,"����",1.78,65.5),
				new Employee(1002,"Lovett Smith",1.6,53),
				new Employee(1003,"John Smith",1.6,53),
				new Employee(1004,"Smith",1.6,53),
				new Employee(1005,"Smith Lan",1.6,53),
				new Employee(1006,"John Brown",1.6,53),
				new Employee(1007,"Mr. John",1.6,53),
				new Employee(1008,"John",1.6,53),
				new Employee(1008,"����",1.6,71),
				new Employee(1008,"����",1.6,81),
				new Employee(1008,"����",1.6,107),
				new Employee(1008,"������",1.6,94),};
		
//		for(int i = 0;i<employees.length;i++) {
//			employees[i].print();
//		}
		
		//�����־�ȷ����
		searchEmployee(employees,"������");
		//������ģ������
		searchContainNameEmployee(employees, "Smith");
		//������ʼ��ѯ
		searchStartNameEmployee(employees, "John");
		//���ֽ�����ѯ
		searchEndNameEmployee(employees, "Smith");
		//�������Ա����BMIָ��
		showEmployeeBMI(employees);
		
	
	}
	
	//����
	public static void searchEmployee(Employee[] employees , String name) {
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().equals(name)) {
				System.out.println("��������Ϊ"+name+"��ְ��");
				return;
			}
		}
		System.out.println("����������Ϊ"+name+"��ְ��");
		
	}	
	
	//������ģ������
	private static void searchContainNameEmployee(Employee[] employees, String containName) {
		System.out.println("���ְ���"+containName+"���ǣ�");
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().contains(containName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}

	//������ʼ��ѯ
	private static void searchStartNameEmployee(Employee[] employees, String startName) {
		System.out.println("������"+startName+"��ͷ�����ǣ�");
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getName().startsWith(startName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}
	
	//���ֽ�����ѯ
	private static void searchEndNameEmployee(Employee[] employees, String endName) {
		System.out.println("������"+endName+"��β�����ǣ�");
		for(int i = 0 ;i<employees.length;i++) {
			if(employees[i].getName().endsWith(endName)==true) {
				System.out.println(employees[i].getName());
			}
		}
		
	}
	
	//�������Ա����BMIָ��
	private static void showEmployeeBMI(Employee[] employees) {
		for(int i = 0;i<employees.length;i++) {
			if(employees[i].getBMI()>18 && employees[i].getBMI()<=25) {
				System.out.printf("%s:  %s\n",employees[i].getName(),"��������");
			}else if(employees[i].getBMI()>25 && employees[i].getBMI()<=30){
				System.out.printf("%s:  %s\n",employees[i].getName(),"����");
			}else if(employees[i].getBMI()>30 && employees[i].getBMI()<=35){
				System.out.printf("%s:  %s\n",employees[i].getName(),"��ȷ���");
			}else if(employees[i].getBMI()>35 && employees[i].getBMI()<=40){
				System.out.printf("%s:  %s\n",employees[i].getName(),"�жȷ���");
			}else if(employees[i].getBMI()>40){
				System.out.printf("%s:  %s\n",employees[i].getName(),"�ضȷ���");
			}
			
		}
		
	}
	
	
	
}


