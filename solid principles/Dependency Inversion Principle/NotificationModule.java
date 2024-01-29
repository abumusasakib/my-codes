// Usage in the Notification Module
public class NotificationModule {
    private final NotificationSender notificationSender;

    // Dependency injection of the abstraction
    public NotificationModule(NotificationSender notificationSender) {
        this.notificationSender = notificationSender;
    }

    public void sendNotification(String message) {
        // Delegating the notification sending to the abstraction
        notificationSender.sendNotification(message);
    }
}