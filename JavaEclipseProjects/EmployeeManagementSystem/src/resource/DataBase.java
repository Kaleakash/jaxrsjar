package resource;

import java.sql.Connection;
import java.sql.DriverManager;

public class DataBase {
private static Connection con;

	public static Connection getDbConnection() {
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			System.out.println("Class Loaded successfully...");
			con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521/orcl", "system", "tiger");
		} catch (Exception e) {
			System.out.println("Db Connection Error "+e.toString());
		}
		return con;
	} 
	
}
