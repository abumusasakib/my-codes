// Import the necessary files and libraries
import 'counter_event.dart';
import 'dart:async';

// CounterBloc class responsible for managing the counter state
class CounterBloc {

  // Internal variable representing the counter state
  int _counter = 0;

  // Stream controller to manage the state of the counter
  final _counterController = StreamController<int>();

  // Public accessors for the counter stream sink and stream
  StreamSink<int> get counterSink => _counterController.sink;
  Stream<int> get counterStream => _counterController.stream;
  
  // Stream controller to handle events related to the counter
  final _counterEventController = StreamController<CounterEvent>();

  // Public accessor for the counter event sink
  Sink<CounterEvent> get counterEventSink => _counterEventController.sink;

  // Constructor: Listen to events and map them to state changes
  CounterBloc(){
    _counterEventController.stream.listen(_mapEventToState);
  }

  // Private method: Map events to state changes
  void _mapEventToState(CounterEvent event) {
    // Check the type of event and update the counter accordingly
    if(event is Increment){
      _counter++;
    }
    else {
      _counter--;
    }

    // Add the updated counter value to the state controller
    counterSink.add(_counter);
  }

  // Dispose method: Close stream controllers to prevent memory leaks
  void dispose(){
    _counterController.close();
    _counterEventController.close();
  }
}
