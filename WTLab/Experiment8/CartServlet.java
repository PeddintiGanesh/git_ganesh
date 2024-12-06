package com.example;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.util.*;

public class CartServlet extends HttpServlet {
    private Map<String, List<String>> carts = new HashMap<>();

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        Cookie[] cookies = request.getCookies();
        String userId = null;

        for (Cookie cookie : cookies) {
            if (cookie.getName().equals("userId")) {
                userId = cookie.getValue();
                break;
            }
        }

        if (userId == null) {
            response.getWriter().println("Please log in first.");
            return;
        }

        String item = request.getParameter("item");
        if (item != null) {
            carts.putIfAbsent(userId, new ArrayList<>());
            carts.get(userId).add(item);
        }

        response.getWriter().println("<h1>Your Shopping Cart</h1>");
        for (String cartItem : carts.getOrDefault(userId, Collections.emptyList())) {
            response.getWriter().println("<p>" + cartItem + "</p>");
        }

        response.getWriter().println("<a href='index.html'>Continue Shopping</a>");
    }
}
