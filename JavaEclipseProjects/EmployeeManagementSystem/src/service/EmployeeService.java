package service;

import java.util.Iterator;
import java.util.List;

import bean.Employee;
import dao.EmployeeDao;

public class EmployeeService {

	EmployeeDao ed = new EmployeeDao();
	
	public String storeEmployeeInfo(Employee emp) throws Exception{
		/*if(emp.getSalary()>15000) {
			int result = ed.storeEmployeeInfo(emp);
			if(result>0) {
				return "Record stored successsfully";
			}else {
				return "Record not stored";
			}
		}else {
			return "Condition not satified";
		}*/
		int result = ed.storeEmployeeInfo(emp);
		if(result>0) {
			return "Record stored";
		}else {
			return "REcord not store";
		}
	}
	
	public List<Employee> listOfRecords() throws Exception{
		List<Employee> listOfRec = ed.retrieveEmployeeInfo();
		Iterator<Employee> li = listOfRec.iterator();
		while(li.hasNext()) {
			Employee emp = li.next();
			emp.setSalary(emp.getSalary()+500);
		}
		return listOfRec;
	}
}


