import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('Expanded with Image Example'),
        ),
        body: MyRowWithExpandedImage(),
      ),
    );
  }
}

class MyRowWithExpandedImage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Row(
      children: [
        Expanded(
          flex: 2,
          child: Container(
            color: Colors.cyan,
            child: Center(
              child: Text('Other Content'),
            ),
          ),
        ),
        Expanded(
          flex: 3,
          child: Container(
            color: Colors.pinkAccent,
            child: Image.network(
              'https://images.unsplash.com/photo-1505506874110-6a7a69069a08?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1887&q=80',
              fit: BoxFit.cover,
            ),
          ),
        ),
        Expanded(
          flex: 1,
          child: Container(
            color: Colors.amber,
            child: Center(
              child: Text('More Content'),
            ),
          ),
        ),
      ],
    );
  }
}
