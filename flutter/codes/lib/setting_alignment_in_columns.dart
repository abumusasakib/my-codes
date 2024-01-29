import 'package:flutter/material.dart';

void main() => runApp(const MaterialApp(
      home: Home(),
    ));

class Home extends StatelessWidget {
  const Home({Key? key}) : super(key: key);

  void buttonPress(BuildContext context) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return const AlertDialog(
          title: Text('Dialog box'),
          content: Text('hello'),
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('my first app'),
        centerTitle: true,
        backgroundColor: Colors.red[600],
      ),
      body: Row(
        children: [
          Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Container(
                padding: const EdgeInsets.all(20.0),
                color: Colors.cyan,
                child: const Text('one'),
              ),
              Container(
                padding: const EdgeInsets.all(30.0),
                color: Colors.pinkAccent,
                child: const Text('two'),
              ),
              Container(
                padding: const EdgeInsets.all(40.0),
                color: Colors.amber,
                child: const Text('three'),
              ),
            ],
          ),
          Column(
            mainAxisAlignment: MainAxisAlignment.end,
            children: [
              Container(
                padding: const EdgeInsets.all(20.0),
                color: Colors.cyan,
                child: const Text('one'),
              ),
              Container(
                padding: const EdgeInsets.all(30.0),
                color: Colors.pinkAccent,
                child: const Text('two'),
              ),
              Container(
                padding: const EdgeInsets.all(40.0),
                color: Colors.amber,
                child: const Text('three'),
              ),
            ],
          ),
          Column(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Container(
                padding: const EdgeInsets.all(20.0),
                color: Colors.cyan,
                child: const Text('one'),
              ),
              Container(
                padding: const EdgeInsets.all(30.0),
                color: Colors.pinkAccent,
                child: const Text('two'),
              ),
              Container(
                padding: const EdgeInsets.all(40.0),
                color: Colors.amber,
                child: const Text('three'),
              ),
            ],
          ),
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () => buttonPress(context),
        backgroundColor: Colors.green,
        child: const Text('click'),
      ),
    );
  }
}
