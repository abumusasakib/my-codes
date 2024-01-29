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
          Row(
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceAround,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.end,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              const Text('hello, world'),
              TextButton(
                onPressed: () => buttonPress(context),
                style: const ButtonStyle(
                  backgroundColor: MaterialStatePropertyAll(Colors.amber),
                ),
                child: const Text('click me'),
              ),
              Container(
                color: Colors.cyan,
                padding: const EdgeInsets.all(30.0),
                child: const Text('inside container'),
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
