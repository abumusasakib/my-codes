public class ZomatoFacade {
    private Restaurant restaurant;
    private DeliveryBoy deliveryBoy;
    private DeliveryTeam deliveryTeam;

    public ZomatoFacade() {
        this.restaurant = new Restaurant();
        this.deliveryBoy = new DeliveryBoy();
        this.deliveryTeam = new DeliveryTeam();
    }

    public void placeOrder() {
        restaurant.prepareOrder();
        deliveryTeam.assignDeliveryBoy();
        deliveryBoy.pickUpOrder();
        deliveryBoy.deliverOrder();
    }
}
