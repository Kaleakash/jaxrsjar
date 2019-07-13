package com;

import javax.ws.rs.GET;
import javax.ws.rs.Path;

@Path("obj")
public class Demo {

	
	@GET
	public String sayHello() {
		return "Welcome to JAX Rs ";
	}
}
