package dao;

import java.sql.Connection;
import java.sql.Date;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.Timestamp;
import java.util.ArrayList;
import java.util.List;

import bean.Employee;
import resource.DataBase;

public class EmployeeDao {

	public int storeEmployeeInfo(Employee emp) throws Exception{
		Connection con = DataBase.getDbConnection();
		PreparedStatement pstmt = con.prepareStatement("insert into employee values(?,?,?,?,?)");
		pstmt.setInt(1, emp.getId());
		pstmt.setString(2, emp.getName());
		pstmt.setFloat(3, emp.getSalary());
		Date dob = new Date(emp.getDob().getTime());		//converting util date to sql date. 
		Timestamp startTime = new Timestamp(emp.getStartTime().getTime());
		pstmt.setDate(4, dob);
		pstmt.setTimestamp(5, startTime);
		int result = pstmt.executeUpdate();
		return result;
	}
	
	public int deleteEmployeeInfo(int empId)  throws Exception{
		Connection con = DataBase.getDbConnection();
		System.out.println("Established the connection successfully...");
		PreparedStatement pstmt = con.prepareStatement("delete from employee where id = ?");
		pstmt.setInt(1, empId);
		int result = pstmt.executeUpdate();
		return result;
	}
	public int updateEmployeeInfo(Employee emp) throws Exception {
		Connection con = DataBase.getDbConnection();
		PreparedStatement pstmt = con.prepareStatement("update employee set salary = ? where id = ?");
		pstmt.setFloat(1, emp.getSalary());
		pstmt.setInt(2, emp.getId());
		int result = pstmt.executeUpdate();
		return result;
	}
	public List<Employee> retrieveEmployeeInfo() throws Exception{
		List<Employee> listOfRec = new ArrayList<Employee>();
		Connection con = DataBase.getDbConnection();
		Statement stmt = con.createStatement();
		ResultSet rs	 = stmt.executeQuery("select * from employee");
		while(rs.next()) {
			Employee emp = new Employee();
			emp.setId(rs.getInt(1));
			emp.setName(rs.getString(2));
			emp.setSalary(rs.getFloat(3));
			emp.setDob(rs.getDate(4));
			emp.setStartTime(rs.getTimestamp(5));
			listOfRec.add(emp);
		}
		return listOfRec;
	}
	
	public Employee getEmployee(int empId) throws Exception{
		Employee emp = new Employee();
		Connection con = DataBase.getDbConnection();
	PreparedStatement pstmt = con.prepareStatement("select * from employee where id = ?");
	pstmt.setInt(1, empId);
		ResultSet rs	 = pstmt.executeQuery();
		while(rs.next()) {
			emp.setId(rs.getInt(1));
			emp.setName(rs.getString(2));
			emp.setSalary(rs.getFloat(3));
			emp.setDob(rs.getDate(4));
			emp.setStartTime(rs.getTimestamp(5));
			}
		return emp;
	}
	
}

