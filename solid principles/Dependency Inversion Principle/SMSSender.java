// Low-level module implementing the abstraction

public class SMSSender implements NotificationSender {
    // Implementation for sending SMS notifications
    @Override
    public void sendNotification(String message) {
        System.out.println("Sending SMS notification: " + message);
        // Additional SMS-specific logic...
    }
}