// Low-level module implementing the abstraction

public class EmailSender implements NotificationSender {
    // Implementation for sending email notifications
    @Override
    public void sendNotification(String message) {
        System.out.println("Sending email notification: " + message);
        // Additional email-specific logic...
    }
}