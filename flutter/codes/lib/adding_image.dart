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
            child: Text(
              'hello ninjas: ',
              style: TextStyle(
                fontSize: 20.0,
                fontWeight: FontWeight.bold,
                letterSpacing: 2.0,
                color: Colors.grey,
                fontFamily: 'IndieFlower',
              ),
            ),
          ),
          // Expanded(
          //   child: Image(
          //       fit: BoxFit.cover,
          //       image: NetworkImage(
          //           'https://images.unsplash.com/photo-1505506874110-6a7a69069a08?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1887&q=80')),
          // ),
          // Expanded(
          //   child: Image(
          //     fit: BoxFit.cover,
          //     image: AssetImage('assets/space-1.jpg'),
          //   ),
          // ),
          Expanded(
            child: Image.network(
                'https://images.unsplash.com/photo-1505506874110-6a7a69069a08?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1887&q=80'),
          ),
          Expanded(
            child: Image.asset('assets/space-1.jpg'),
          ),
          const Expanded(
            child: Image(
              fit: BoxFit.cover,
              image: AssetImage('assets/space-2.jpg'),
            ),
          ),
          const Expanded(
            child: Image(
              fit: BoxFit.cover,
              image: AssetImage('assets/space-3.jpg'),
            ),
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
