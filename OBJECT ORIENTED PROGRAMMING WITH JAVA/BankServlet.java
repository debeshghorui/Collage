import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/BankServlet")
public class BankServlet extends HttpServlet {
    private double balance = 1000.0; // Initial balance

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<html><body>");
        out.println("<h2>Banking Application</h2>");
        out.println("<form method='post'>");
        out.println("Amount: <input type='number' name='amount' step='0.01' required><br>");
        out.println("<input type='submit' name='action' value='Deposit'>");
        out.println("<input type='submit' name='action' value='Withdraw'>");
        out.println("</form>");
        out.println("<p>Current Balance: Rs. " + balance + "</p>");
        out.println("</body></html>");
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String action = request.getParameter("action");
        double amount = Double.parseDouble(request.getParameter("amount"));
        if ("Deposit".equals(action)) {
            balance += amount;
        } else if ("Withdraw".equals(action)) {
            if (amount <= balance) {
                balance -= amount;
            }
        }
        doGet(request, response);
    }
}
