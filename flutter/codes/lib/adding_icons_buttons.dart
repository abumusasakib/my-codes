import 'package:flutter/foundation.dart';
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
          const Center(
            child: Icon(
              Icons.airport_shuttle,
              color: Colors.lightBlue,
              size: 50.0,
            ),
          ),
          ElevatedButton(
            onPressed: () => buttonPress(context),
            style: const ButtonStyle(
              backgroundColor: MaterialStatePropertyAll(Colors.lightBlue),
            ),
            child: const Text('click me'),
          ),
          ElevatedButton.icon(
            onPressed: () => buttonPress(context),
            icon: const Icon(Icons.mail),
            label: const Text('mail me'),
            style: const ButtonStyle(
              foregroundColor: MaterialStatePropertyAll(Colors.black),
              backgroundColor: MaterialStatePropertyAll(Colors.amber),
            ),
          ),
          IconButton(
            onPressed: () {
              if (kDebugMode) {
                print('you clicked me');
              }
            },
            icon: const Icon(Icons.alternate_email),
            color: Colors.amber,
          ),
          TextButton(
            onPressed: () {
              if (kDebugMode) {
                print('you clicked me');
              }
            },
            style: const ButtonStyle(
              backgroundColor: MaterialStatePropertyAll(Colors.lightBlue),
              foregroundColor: MaterialStatePropertyAll(Colors.black),
            ),
            child: const Text('click me'),
          )
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
