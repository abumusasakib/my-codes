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
      body: Column(
        children: [
          Container(
            padding: const EdgeInsets.all(20.0),
            color: Colors.grey[400],
            child: const Text('hello'),
          ),
          Container(
            padding:
                const EdgeInsets.symmetric(horizontal: 30.0, vertical: 10.0),
            color: Colors.grey[400],
            child: const Text('hello'),
          ),
          Container(
            padding: const EdgeInsets.fromLTRB(10.0, 20.0, 30.0, 40.0),
            color: Colors.grey[400],
            child: const Text('hello'),
          ),
          Container(
            padding: const EdgeInsets.fromLTRB(10.0, 20.0, 30.0, 40.0),
            margin: const EdgeInsets.all(30.0),
            color: Colors.grey[400],
            child: const Text('hello'),
          ),
          const Padding(padding: EdgeInsets.all(90.0), child: Text('hello'))
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
