package main;

import java.text.SimpleDateFormat;
import java.util.Date;

import bean.Employee;
import dao.EmployeeDao;


public class EmployeeTest {

	public static void main(String[] args) throws Exception{
		Employee emp1 = new Employee();
		emp1.setId(100);
		emp1.setName("Raj");
		emp1.setSalary(12000);
		
		SimpleDateFormat sdf = new SimpleDateFormat("dd-MMM-yyyy");
		Date dob = sdf.parse("03-Mar-1990");		//converting string to date 
		emp1.setDob(dob);
		SimpleDateFormat sdf1 = new SimpleDateFormat("hh.mm.ss");
		Date startTime = sdf1.parse("12.24.30");
		emp1.setStartTime(startTime);
		EmployeeDao ed = new EmployeeDao();
		ed.storeEmployeeInfo(emp1);


//ed.retrieveEmployeeInfo();
	}

}




