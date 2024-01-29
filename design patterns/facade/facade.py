class Restaurant:
    def prepare_order(self):
        print("Preparing the order")

class DeliveryTeam:
    def assign_delivery_boy(self):
        print("Assigning a delivery boy")

class DeliveryBoy:
    def deliver_order(self):
        print("Delivering the order")

class ZomatoFacade:
    def __init__(self):
        self.restaurant = Restaurant()
        self.delivery_team = DeliveryTeam()
        self.delivery_boy = DeliveryBoy()

    def place_order(self):
        print("Placing the order")
        self.restaurant.prepare_order()
        self.delivery_team.assign_delivery_boy()
        self.delivery_boy.deliver_order()

# Using the Facade to place an order
zomato_facade = ZomatoFacade()
zomato_facade.place_order()
