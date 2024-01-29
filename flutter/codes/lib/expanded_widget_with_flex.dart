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
          title: Text('Flex Values Example'),
        ),
        body: MyRowWithFlexValues(),
      ),
    );
  }
}

class MyRowWithFlexValues extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Row(
      children: [
        Expanded(
          flex: 3,
          child: Container(
            padding: EdgeInsets.all(20),
            color: Colors.cyan,
          ),
        ),
        Expanded(
          flex: 2,
          child: Container(
            padding: EdgeInsets.all(30),
            color: Colors.pinkAccent,
          ),
        ),
        Expanded(
          flex: 1,
          child: Container(
            padding: EdgeInsets.all(40),
            color: Colors.amber,
          ),
        ),
      ],
    );
  }
}