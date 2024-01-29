// This allows you to create various `NotificationSender` implementations (e.g., `EmailSender`, `SMSSender`)
// and use them interchangeably in the `NotificationModule` without modifying the module's code.

public class Main {
    public static void main(String[] args) {
        // Creating instances of low-level modules
        NotificationSender emailSender = new EmailSender();
        NotificationSender smsSender = new SMSSender();

        // Using the high-level module with dependency injection
        NotificationModule emailNotificationModule = new NotificationModule(emailSender);
        NotificationModule smsNotificationModule = new NotificationModule(smsSender);

        // Sending notifications using the high-level module
        emailNotificationModule.sendNotification("Important email notification");
        smsNotificationModule.sendNotification("Urgent SMS notification");
    }
}
