package com.example;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class LoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String userId = request.getParameter("userId");
        String password = request.getParameter("password");
        
        ServletContext context = getServletContext();
        String userDetails = context.getInitParameter(userId);
        
        if (userDetails != null) {
            String[] details = userDetails.split(",");
            if (password.equals(details[0])) {
                Cookie userCookie = new Cookie("userId", userId);
                response.addCookie(userCookie);
                response.sendRedirect("cart.html");
            } else {
                response.getWriter().println("Invalid Password!");
            }
        } else {
            response.getWriter().println("User Not Found!");
        }
    }
}
