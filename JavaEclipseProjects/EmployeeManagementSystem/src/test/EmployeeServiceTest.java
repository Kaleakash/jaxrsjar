package test;

import static org.junit.Assert.*;

import java.text.SimpleDateFormat;
import java.util.Date;

import org.junit.Test;

import bean.Employee;
import service.EmployeeService;

public class EmployeeServiceTest {

	@Test
	public void testStoreEmployeeInfo() {
	//	fail("Not yet implemented");
		try {
			SimpleDateFormat sdf1 = new SimpleDateFormat("dd-MMM-yyyy");
			SimpleDateFormat sdf2 = new SimpleDateFormat("hh.mm.ss");
			Date dob = sdf1.parse("23-Mar-1998");
			Date startTime = sdf2.parse("4.34.56");
			Employee emp = new Employee();
			emp.setId(6);
			emp.setName("Mahesh");
			emp.setSalary(16000);
			emp.setDob(dob);
			emp.setStartTime(startTime);
			EmployeeService es = new EmployeeService();
			String res = es.storeEmployeeInfo(emp);
			
			assertEquals("Record stored", res);
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println(e);
		}
	}

	@Test
	public void testListOfRecords() {
		//fail("Not yet implemented");
		
	}

}
